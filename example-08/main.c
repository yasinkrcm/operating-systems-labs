#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
    pid_t p;
    p=fork();

    if(p==0){ // child process
        printf("I am child having PID: %d\n",getpid());
        printf("My parent PID is: %d\n",getppid());
    }
    else{ // parent process
        sleep(10); // Parent process sleeps for 3 seconds , we have to use wait to avoid zombie process wait(NULL);
        printf("I am parent having PID: %d\n",getpid());
        printf("My child PID is: %d\n",p);
    }
}