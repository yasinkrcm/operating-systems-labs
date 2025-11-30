
// Include necessary header files
#include <unistd.h>
#include <stdio.h>



// Function to write "Hello" to the standard output
int write_fonksiyonu(int m){
    m = write(1,"Hello",5); // Write "Hello" (5 bytes) to stdout (file descriptor 1)

    printf("\nvalue of n is %d\n",m); // Print the number of bytes written

    return 0;
}


// Function to read input from the user and write it back to the output
int read_fonksiyonu(int n){

    char b[30]; // Buffer to store input

    n = read(0,b,30); // Read up to 30 bytes from stdin (file descriptor 0)

    write(1,b,n); // Write the read bytes to stdout

    return 0;
}


// Main function
int main() {

    int n;
    int m;
    write_fonksiyonu(n); // Call the write function
    read_fonksiyonu(m);  // Call the read function

    return 0;
}


