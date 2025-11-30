#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main(){
    
    int fd,fd1; 
    fd = open("dup",O_RDONLY); // Open file "dup" for reading
    printf("OLD File Descriptor: %d\n",fd); // Print the old file descriptor
    fd1 = dup2(fd,7);          // Duplicate the file descriptor
    printf("NEW File Descriptor: %d\n",fd1); // Print the new file descriptor
    return 0;
}