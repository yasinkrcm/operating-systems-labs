# Example 06 – Multiple fork Usage

## Purpose
To create multiple child processes and demonstrate the relationship between processes.

## System Calls / Functions Used
- fork
- waitpid
- getpid
- getppid
- printf

## How It Works
The program creates two child processes. Each child and the parent print their own PID and PPID. The parent waits for its children to finish using waitpid.

## How to Compile and Run
$ gcc main.c -o app
$ ./app
