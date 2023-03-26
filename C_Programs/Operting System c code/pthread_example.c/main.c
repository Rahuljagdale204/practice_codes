#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>
#include<unistd.h>

sem_t room;
sem_t chopstick[5];

void * philosopher(void *);
void eat(int);
void* foo()
{

    // acquire a lock
    pthread_mutex_lock(&lock);
    if (done == 1) {

        // let's wait on condition variable cond1
        done = 2;
        printf("Waiting on condition variable cond1\n");
        pthread_cond_wait(&cond1, &lock);
    }
    else {

        // Let's signal condition variable cond1
        printf("Signaling condition variable cond1\n");
        pthread_cond_signal(&cond1);
    }

    // release lock
    pthread_mutex_unlock(&lock);

    printf("Returning thread\n");

    return NULL;
}
int main()
{
	int i,a[5];
	pthread_t tid[5];

	sem_init(&room,0,4);

	for(i=0;i<5;i++)
		sem_init(&chopstick[i],0,1);

	for(i=0;i<5;i++){
		a[i]=i;
		pthread_create(&tid[i],NULL,philosopher,(void *)&a[i]);
	}
	for(i=0;i<5;i++)
		pthread_join(tid[i],NULL);
}

void * philosopher(void * num)
{
	int phil=*(int *)num;

	sem_wait(&room);
	printf("\nPhilosopher %d has entered room",phil+1);
	sem_wait(&chopstick[phil]);
	sem_wait(&chopstick[(phil+1)%5]);

	eat(phil);
	_sleep(2);
	printf("\nPhilosopher %d has finished eating",phil+1);

	sem_post(&chopstick[(phil+1)%5]);
	sem_post(&chopstick[phil]);
	sem_post(&room);
}

void eat(int phil)
{
	printf("\nPhilosopher %d is eating",phil+1);
}
