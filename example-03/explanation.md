# Example 03 – File Seeking

## Purpose
To move to a specific position in a file and read data from there.

## System Calls / Functions Used
- open
- lseek
- read
- write
- printf

## How It Works
The program opens the "seeking" file, moves the file pointer to different positions (using lseek), reads data from the current position, and writes it to the screen.

## How to Compile and Run
$ gcc main.c -o app
$ ./app
