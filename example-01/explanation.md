# Example 01 – Basic Read/Write System Calls

## Purpose
To read data from the user, print it to the screen, and demonstrate basic write/read system calls.

## System Calls / Functions Used
- write
- read
- printf

## How It Works
The program contains two functions:
- `write_fonksiyonu`: Writes "Hello" to standard output and prints the number of bytes written.
- `read_fonksiyonu`: Reads data from the user and writes the read data to the screen.
The main function calls these two functions.

## How to Compile and Run
$ gcc main.c -o app
$ ./app
