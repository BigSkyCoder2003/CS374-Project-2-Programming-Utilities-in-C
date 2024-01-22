#include <stdio.h>

int main(int argc, char *argv[]){

for (int argnum = 0; argnum < argc; argnum++)
{
printf("%d: ",argnum);
printf("%s\n", argv[argnum]);



}



}