#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
    pid_t p;
    p = fork();

    if (p==0){
        sleep(10); // Child process sleeps for 10 seconds
        printf("I am child having PID: %d\n",getpid());
        printf("My parent PID is: %d\n",getppid());
    }
    else{
        sleep(2); // Parent process sleeps for 2 seconds
        printf("I am parent having PID: %d\n",getpid());
        printf("My child PID is: %d\n",p);
    }
    return 0;
}