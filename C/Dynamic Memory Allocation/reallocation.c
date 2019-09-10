
/*Example program for reallocation*/ 

#include<stdio.h>
#include<stdlib.h>

#define NULL 0

void main()
{
char *buffer;

/*Allocating memory*/

if((buffer=(char *) malloc(10))==NULL)
{
printf("Malloc failed\n");
exit(1);
	   }

printf("Buffer of size %d created \n",sizeof(buffer));

strcpy(buffer,"Bangalore");

printf("\nBuffer contains:%s\n",buffer);

/*Reallocation*/

if((buffer=(char *)realloc(buffer,15))==NULL)
{
printf("Reallocation failed\n");
exit(1);
}

	printf("\nBuffer size modified.\n");
	printf("\nBuffer still contains: %s\n",buffer);

	strcpy(buffer,"Mysore");

	printf("\nBuffer now contains:%s\n",buffer);

	/*freeing memory*/
	free(buffer);
}


