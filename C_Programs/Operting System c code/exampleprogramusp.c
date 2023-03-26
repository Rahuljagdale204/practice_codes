#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <Windows.h>
#include <unistd.h>

int MYARRAY[50000];
int head = 0;
int tail = 0;
pthread_mutex_t mutex;
pthread_cond_t cond;

void* routine(void *arg) {
        pthread_mutex_lock(&mutex);
    
        while(head < tail){
            pthread_cond_wait(&cond, &mutex);
        }
        int ith = *(int *)arg;
        MYARRAY[head] = (ith+1);
        head++;
        printf("WRITER %d\n", ith+1);

        if (head == 50000){
            head = 0;
        }

        free(arg);
        sleep(1);
        pthread_mutex_unlock(&mutex);
        pthread_cond_signal(&cond);
        
}
void* reading() { 
        pthread_mutex_lock(&mutex);
        while (tail >= head || head<20){
            pthread_cond_wait(&cond, &mutex);
        }
        printf("\t\t\t\t\tREAD %d\n", MYARRAY[tail]);
        tail++;
        if (tail == 50000){
            tail = 0;
        }
        sleep(1);
        pthread_mutex_unlock(&mutex);
        pthread_cond_signal(&cond);    
        
}

int main(int argc, char* argv[]) {

    pthread_t warray[20];
    pthread_t rarray[2];

    pthread_mutex_init(&mutex, NULL);
    pthread_cond_init(&cond, NULL);

    while(1){
        for (int i_write = 0; i_write < 20; i_write++)
    {
        int* abcd = malloc(sizeof(int));
        *abcd = i_write;
        pthread_create(&warray[i_write], NULL, &routine, abcd);
    }

    for (int i_write2 = 0; i_write2 < 2; i_write2++)
    {
        pthread_create(&rarray[i_write2], NULL, &reading, NULL);
    }
    for (int i_read = 0; i_read < 20; i_read++)
    {
        pthread_join(warray[i_read], NULL);
    }

   
    for (int i_read2 = 0; i_read2 < 2; i_read2++)
    {
        pthread_join(rarray[i_read2], NULL);
    }
    }
    
    
    pthread_mutex_destroy(&mutex);
    pthread_cond_destroy(&cond);
    for (int n = 0; n < 20; n++)
    {
        printf("%d\n", MYARRAY[n]);
    }
}