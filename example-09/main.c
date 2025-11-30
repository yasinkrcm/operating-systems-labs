#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>


int main(){
    pid_t q;
    q = fork();
    if (q==0){ // child processü
        execl("/bin/ps","ps",NULL);
        printf("I am child having PID: %d\n",getpid());
        sleep(10); // Child process sleeps for 10 seconds
    }
    else{ // parent process
        wait(NULL); // wait for child process to finish
        printf("I am parent having PID: %d\n",getpid());
    }
}