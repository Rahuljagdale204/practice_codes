#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>

int size = 100;
int TAIL;  // f
int HEAD; // r
pid_t Queue[100] = { -1 };

int NITEMS = 0;
int AVAILABLE = 0;

pthread_mutex_t mutexHead;
pthread_mutex_t mutexTail;
pthread_mutex_t mutexNITEMS;
pthread_mutex_t mutexAvailable;
pthread_cond_t condInserted;
pthread_cond_t condAvailable;


int isEmpty(){
    if(HEAD==TAIL){
        return 1;
    }
    return 0;
}

int isFull(){
    if((HEAD+1)%size == TAIL){
        return 1;
    }

}

void* writer(){
    while(1)
    {
        pthread_mutex_lock(&mutexHead);


            if(!isFull())
            {
                pid_t tid = pthread_self();
                HEAD = (HEAD +1)%size;
                Queue[HEAD] = tid;
                printf("\nEnqued element: %lu\n", tid);

                pthread_mutex_lock(&mutexAvailable);
                    AVAILABLE = 1;
                    pthread_cond_signal(&condAvailable);
                pthread_mutex_unlock(&mutexAvailable);

                pthread_mutex_lock(&mutexNITEMS);
                    NITEMS++;
                    printf("Number of items in queue: %d\n", NITEMS);
                pthread_mutex_unlock(&mutexNITEMS);
                pthread_cond_broadcast(&condInserted);
            }

        pthread_mutex_unlock(&mutexHead);
    }
}

void* reader()
{
    while(1)
    {
        pthread_mutex_lock(&mutexTail);
            while(!AVAILABLE)
            {
                printf("\nWaiting for available signal...\n");
                pthread_cond_wait(&condAvailable, &mutexTail);
            }


            pid_t a = -1;
            if(!isEmpty()){
                TAIL = (TAIL + 1)%size;
                a = Queue[TAIL];
                Queue[TAIL] = -1;
                pthread_mutex_lock(&mutexNITEMS);
                    NITEMS--;
                    printf("\nDequeued data: %lu\n", a);
                    printf("Number of items in queue: %d\n", NITEMS);
                pthread_mutex_unlock(&mutexNITEMS);
            }

            if(NITEMS == 0)
            {
                pthread_mutex_lock(&mutexAvailable);
                AVAILABLE = 0;
                pthread_mutex_unlock(&mutexAvailable);
            }

        pthread_mutex_unlock(&mutexTail);
    }
}


int main(){
    size = 100;
    TAIL = HEAD = 0;
    pthread_t writer_threads[20];
    pthread_t reader_threads[2];
    pthread_mutex_init(&mutexTail, NULL);
    pthread_mutex_init(&mutexHead, NULL);
    pthread_mutex_init(&mutexNITEMS, NULL);
    pthread_mutex_init(&mutexAvailable, NULL);
    pthread_cond_init(&condInserted, NULL);
    pthread_cond_init(&condAvailable, NULL);


    for (int i = 0; i < 20; i++) {
        if (pthread_create(&writer_threads[i], NULL, &writer, NULL) != 0) {
            perror("Error at creating thread");
        }
    }

    for (int i = 0; i < 2; i++) {
        if (pthread_create(&reader_threads[i], NULL, &reader, NULL) != 0) {
            perror("Error at creating thread");
        }
    }





    for (int i = 0; i < 20; i++) {
        if (pthread_join(writer_threads[i], NULL) != 0) {
            perror("Error at joining thread");
        }
    }

    for (int i = 0; i < 2; i++) {
        if (pthread_join(reader_threads[i], NULL) != 0) {
            perror("Error at joining thread");
        }
    }

    pthread_cond_destroy(&condInserted);
    pthread_cond_destroy(&condAvailable);
    pthread_mutex_destroy(&mutexAvailable);
    pthread_mutex_destroy(&mutexNITEMS);
    pthread_mutex_destroy(&mutexHead);
    pthread_mutex_destroy(&mutexTail);

    return 0;
}
