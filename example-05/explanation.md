# Example 05 – Basic fork Usage

## Purpose
To demonstrate creating a new process using the fork() system call.

## System Calls / Functions Used
- fork
- getpid
- getppid
- printf

## How It Works
The program creates a child process with fork(). Both the parent and child print their own PID and PPID. The "Common" line is executed by both processes.

## How to Compile and Run
$ gcc main.c -o app
$ ./app
