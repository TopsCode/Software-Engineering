#include <stdio.h> 
#include <conio.h> 
extern int i=10; 
void main() 
{ 
	int i=20; 
	
	void show(void); 
	clrscr(); 	
	printf("\n\t %d",i); 
	show(); 
	
	getch(); 
} 
void show(void) 
{ 
	printf("\n\n\t %d",i); 
}
