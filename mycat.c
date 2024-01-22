#include <stdio.h>
#include <fcntl.h> 
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 2048

int main(int argc, char *argv[]){
  char* buffer[BUFFER_SIZE];
  int fileopen,fileread;
  if (argc == 1)
  {
    fileread = read(0,buffer,BUFFER_SIZE);
    write(STDOUT_FILENO,buffer,fileread);
    return 0;
  }
for (int argnum = 1; argnum < argc; argnum++)
{
fileopen = open(argv[argnum], O_RDONLY);
fileread = read(fileopen,buffer,BUFFER_SIZE);
write(STDOUT_FILENO,buffer,fileread);
close(fileopen);
} 

}