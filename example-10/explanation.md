# Example 10 – Using Threads with pthread

## Purpose
To demonstrate basic thread creation and parallel execution of the main function and a thread.

## System Calls / Functions Used
- pthread_create
- pthread_join
- printf
- sleep

## How It Works
A thread is created in the program. The thread and the main function print numbers in different loops and use sleep to create a time interval.

## How to Compile and Run
$ gcc main.c -o app -lpthread
$ ./app
