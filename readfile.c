#include <stdio.h>
#include <fcntl.h> 
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 2048

int main(int argc, char *argv[]){
char* buffer[BUFFER_SIZE];
int fileopen = open(argv[1], O_RDONLY);
int fileread = read(fileopen,buffer,BUFFER_SIZE);
write(STDOUT_FILENO,buffer,fileread);
close(fileopen);
}