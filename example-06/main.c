#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <sys/wait.h>

int main(){
    pid_t p,q; // Variable to store process ID

    printf("Before fork\n");

    p=fork(); // Create a new process

    if (p==0){ // Child1

        printf("I am first child havin id: %d\n",getpid());
        printf("My parent PID is: %d\n",getppid());

    }
    else{ // Parent process
        q=fork(); // Create a new process

        if (q==0){ // Child2
            printf("I am second child having PID: %d\n",getpid());
            printf("Second child's parent PID is: %d\n",getppid());
        }
        else{ // Parent process
            waitpid(p,NULL,0); // Wait for first child to finish
            printf("I am parent havin PID: %d\n",getpid()); 
            printf("My first child PID is: %d\n",p);
            printf("My second child PID is: %d\n",q);
        }
    }
    return 0;

}