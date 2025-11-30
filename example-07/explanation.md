# Example 07 – fork and sleep

## Purpose
To create a process using fork() and control the execution time of processes using sleep().

## System Calls / Functions Used
- fork
- sleep
- getpid
- getppid
- printf

## How It Works
A child process is created with fork(). The child process sleeps for 10 seconds, the parent process sleeps for 2 seconds. Each prints its own PID and PPID.

## How to Compile and Run
$ gcc main.c -o app
$ ./app
