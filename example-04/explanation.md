# Example 04 – File Descriptor Duplication

## Purpose
To duplicate a file descriptor and use it with a new descriptor.

## System Calls / Functions Used
- open
- dup2
- printf

## How It Works
The program opens the "dup" file in read mode, duplicates the file descriptor with dup2 to a new descriptor, and prints both descriptors.

## How to Compile and Run
$ gcc main.c -o app
$ ./app
