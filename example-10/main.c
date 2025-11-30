#include <stdio.h>
#include <unistd.h>
#include <pthread.h>


void* thread_function(void* arg);  // Thread function declaration
    int i,n,j;
int main(){
    pthread_t a_thread; // Thread identifier
    pthread_create(&a_thread,NULL,thread_function,NULL); // Create a new thread
    pthread_join(a_thread,NULL); // Wait for the created thread to finish
    printf("Inside main function\n"); 
    for (j=20;j<25;j++){ // Main thread loop
        printf("%d\n",j);
        sleep(1);
    }
}

void *thread_function(void* arg){ //
    printf("Inside thread function\n"); 
    for(i=0;i<5;i++){ // Thread loop
        printf("%d\n",i);
        sleep(1);
    }
}