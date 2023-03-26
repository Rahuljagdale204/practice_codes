#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
int mainarr[50000];
int wpointer = 0;
int rpointer = 0;
pthread_mutex_t mutex;
pthread_cond_t cond;
void *routine(void *arg)
{
    pthread_mutex_lock(&mutex);
// wait condition if read is present
    while (wpointer < rpointer)
    {
        pthread_cond_wait(&cond, &mutex);
    }
    int index = *(int *)arg;
    mainarr[wpointer] = (index + 1);
    wpointer++;
    if (wpointer == 50000)
    {
        wpointer = 0;
    }
    printf("WRITER %d\n", index + 1);
    free(arg);
    sleep(1);
    pthread_mutex_unlock(&mutex);
    pthread_cond_signal(&cond);
    }
void *reading(void *arg)
    {
    pthread_mutex_lock(&mutex);
    while (rpointer >= wpointer || wpointer < 20)
    {
        pthread_cond_wait(&cond, &mutex);
    }
    int index = *(int *)arg;
    printf("\t\t\t\t\tREADER %d READ %d\n", (index + 1), mainarr[rpointer]);
    rpointer++;
    if (rpointer == 50000)
    {
        rpointer = 0;
    }
    sleep(1);
    pthread_mutex_unlock(&mutex);
    pthread_cond_signal(&cond);
    }
int main(int argc, char *argv[])
{
    pthread_t p[20];
    pthread_t r[2];
    pthread_mutex_init(&mutex, NULL);
    pthread_cond_init(&cond, NULL);
// writing threads
    while (1)
    {
        for (int i = 0; i < 20; i++)
        {
            int *a = malloc(sizeof(int));
            *a = i;
            pthread_create(&p[i], NULL, &routine, a);
        }
// reading threads
        for (int i = 0; i < 2; i++)
        {
            int *k = malloc(sizeof(int));
            *k = i;
            pthread_create(&r[i], NULL, &reading, k);
        }
        for (int i = 0; i < 20; i++)
        {
        pthread_join(p[i], NULL);
        }
        for (int i = 0; i < 2; i++)
        {
        pthread_join(r[i], NULL);
        }
    }
    pthread_mutex_destroy(&mutex);
    pthread_cond_destroy(&cond);
    for (int n = 0; n < 20; n++)
    {
        printf("%d\n", mainarr[n]);
    }
}