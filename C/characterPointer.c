#include <stdio.h>			    
int main()
{
  char a='b';
  char *ptr;
  clrscr();
  printf("%c \n",a);
  ptr=&a;
  printf("%p \n",ptr);
  *ptr='d';
  printf("%c \n",a);
  return 0;
}
