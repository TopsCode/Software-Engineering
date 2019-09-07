#include <stdio.h> 
#include <conio.h> 
void main() 
{ 
	register int i=10; 
	clrscr(); 
		
	{ 
		register int i=20; 
		printf("\n\t %d",i); 
	} 
	printf("\n\n\t %d",i); 
	
	getch(); 
}


 
