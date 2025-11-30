# Example 08 – fork, sleep and zombie

## Purpose
To demonstrate zombie process creation when the parent exits without waiting after creating a child process with fork().

## System Calls / Functions Used
- fork
- sleep
- getpid
- getppid
- printf

## How It Works
A child process is created with fork(). The child sleeps for 10 seconds, the parent sleeps for 3 seconds and exits without waiting. This allows observing a zombie process.

## How to Compile and Run
$ gcc main.c -o app
$ ./app
