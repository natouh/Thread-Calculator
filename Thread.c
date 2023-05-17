#include <stdio.h>
#include <pthread.h>

#define NUM_THREADS 5

int shared = 0;
pthread_mutex_t mutex;

void *thread_function(void *arg) 
int main() 
{
      int i;
    pthread_t threads[NUM_THREADS];
    int tids[NUM_THREADS];
    pthread_mutex_init(&mutex, NULL);
    for (i = 0; i < NUM_THREADS; i++) {
        tids[i] = 1+ i;
        pthread_create(&threads[i], NULL, thread_function, &tids[i]);
    }
    for (i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }
    printf("Final value of shared variable: %d\n", shared;
    pthread_mutex_destroy(&mutex);
    return 0;
}

{
    int tid = *(int*)arg;
    pthread_mutex_lock(&mutex);
    shared = shared + tid;
    printf("Thread %d added %d to shared variable (current value: %d)\n", tid, tid, shared);
    pthread_mutex_unlock(&mutex);
    pthread_exit(NULL);
}


