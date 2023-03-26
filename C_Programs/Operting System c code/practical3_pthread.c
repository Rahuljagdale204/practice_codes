#include <pthread.h>
#include <stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <Windows.h>

int HEAD= 0;
int TAIL = 0;

int MYARRAY[50000];

pthread_mutex_t mutex;

pthread_cond_t cond;


//Threads writing into the array.
void* thread1(void *argument) {
    pthread_mutex_lock(&mutex);
    while(HEAD < TAIL) {
        pthread_cond_wait(&cond, &mutex);
    }
    int ID = *(int *)argument;
    MYARRAY[HEAD] = (ID+1);
    HEAD++;
    printf("WRITER %d\n",ID+1);
    if(HEAD == 50000){
        HEAD = 0;
    }

    free(argument);
    sleep(1);
    pthread_mutex_unlock(&mutex);
    pthread_cond_signal(&cond);
}

//reading threads from the array
void* thread2() {
    pthread_mutex_lock(&mutex);
    while(TAIL >= HEAD || HEAD<20) {
        pthread_cond_wait(&cond, &mutex); 
    }
    printf("\t\t\t\t\tREAD %d\n",MYARRAY[TAIL],MYARRAY[TAIL]);
    TAIL++;
    if(TAIL == 50000) {
        TAIL = 0;
    }
    sleep(1);
    pthread_mutex_unlock(&mutex);
    pthread_cond_signal(&cond);
}

int main(int argcount, char* argvector[]) {
    pthread_t writing_thread[20];
    pthread_t reading_thread[2];
    pthread_mutex_init(&mutex, NULL);
    pthread_cond_init(&cond, NULL);

    while(1){
        //Writing thread part
        for(int index=0;index<20;index++){
            int* head2 = malloc(sizeof(int));
            *head2 = index;
            pthread_create(&writing_thread[index],NULL, &thread1, head2);
        }
        //reading thread part
        for(int index = 0;index<2;index++) {
            pthread_create(&reading_thread[index], NULL, &thread2, NULL);
        }
        for(int j_index = 0; j_index < 20;j_index++){
            pthread_join(writing_thread[j_index],NULL);
        }
        for(int r_index = 0;r_index < 2;r_index++) {
            pthread_join(reading_thread[r_index], NULL);
        }
    }

    pthread_mutex_destroy(&mutex);
    pthread_cond_destroy(&cond);
    for(int index = 0; index<20;index++){
        printf("%d\n", MYARRAY[index]);
    }

}

