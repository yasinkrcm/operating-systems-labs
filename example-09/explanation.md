# Example 09 – fork, execl and wait

## Purpose
To run another program (ps) in the child process and demonstrate the parent waiting.

## System Calls / Functions Used
- fork
- execl
- wait
- getpid
- printf

## How It Works
A child process is created with fork(). The child runs /bin/ps using execl. The parent waits for the child to finish using wait.

## How to Compile and Run
$ gcc main.c -o app
$ ./app
