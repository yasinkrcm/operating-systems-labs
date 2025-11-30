#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main(){
    pid_t q; // Variable to store process ID

    printf("Before fork\n");

    q=fork(); // Create a new process

    if (q==0){ // Child process
        printf("I am child havin id: %d\n",getpid());
        printf("My parent id is: %d\n",getppid());
    }
    else{ // Parent process
        printf("My child id is: %d\n",q);
        printf("I am parent havin id: %d\n",getpid()); 
    }
    printf("Common\n"); // This line will be executed by both parent and child processes
    return 0;

}