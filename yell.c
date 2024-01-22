#include <stdio.h>
#include <fcntl.h> 
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

#define BUFFER_SIZE 2048

int main(int argc, char *argv[]){
  char buffer[BUFFER_SIZE];
  int fileopen,fileread;
  if (argc == 1)
  {
    while ((fileread = read(STDIN_FILENO,buffer,BUFFER_SIZE)) > 0){

    for(int i = 0; i < fileread; i++)
    {
      buffer[i] = toupper(buffer[i]);


    }

    write(STDOUT_FILENO,buffer,fileread);
    }
  }
for (int argnum = 1; argnum < argc; argnum++)
{
fileopen = open(argv[argnum], O_RDONLY);
fileread = read(fileopen,buffer,BUFFER_SIZE);
for(int i = 0; i < fileread; i++)
    {
      buffer[i] = toupper(buffer[i]);


    }

write(STDOUT_FILENO,buffer,fileread);
close(fileopen);
} 

}