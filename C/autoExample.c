
#include <stdio.h> 
#include <conio.h> 
void main() 
{ 
	auto int i=10; 
	clrscr(); 
	{ 
		auto int i=20; 
		printf("\n\t %d",i); 
	} 
	printf("\n\n\t %d",i); 
	getch(); 
}
