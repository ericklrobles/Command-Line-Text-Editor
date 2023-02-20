#include <stdio.h>
#include <stdlib.h>
//learning how to work with pointers before I start out the command line text editor
int main(void)
{
  int b = 10;
  int *p;
  p = &b;
  printf("%d\n", &p);
  printf("size of integer is %d bytes\n",sizeof(int));
  printf("%d\n", p+1);
  printf("the value at address p is %d\n", *p);


}