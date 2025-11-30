#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main(){

    int n,f,f1;
    char buffer[10]; // Buffer to store read bytes 

    f = open("seeking",O_RDWR); // Open file "seeking" for reading and writing 1234567890abcdefghijx1x2x3x4x5
    f1 = lseek(f,10,SEEK_SET); // Move the file offset to byte 10
    f1 = lseek(f,-11 ,SEEK_END); // Move the file offset to 11 bytes before the end of the file
    
    printf("Pointer is at %d position\n",f1);

    read(f,buffer,10);        // Read 10 bytes from the current offset
    write(1,buffer,10);       // Write the read bytes to stdout
    printf("\n");

    return 0;
}
