#include <stdio.h>

int main()
{
int MULTIPLE = 5;
int product;
int x = 12;
float y = 3.14;
char s[] = "Hello, world!";
printf("x is %d, ", x);
printf("y is %f\n", y);
printf("%s\n",s);
for (int i = 0; i<=4; i++)
{
product = i * MULTIPLE;
printf("%d",i);
printf(" x ");
printf("%d",MULTIPLE);
printf(" = %d\n",product);
}

}