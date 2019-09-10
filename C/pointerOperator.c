#include <stdio.h>
int main()
{
int ArrayA[3]={1,2,3};
int *ptr;
clrscr();
	ptr=ArrayA;
	printf("\naddress: %p - array value:%d \n",ptr,*ptr);
	ptr++;
	printf("\naddress: %p - array value:%d \n",ptr,*ptr);
return 0;
}
