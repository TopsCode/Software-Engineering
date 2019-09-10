// Program to demonstrate function.

#include <stdio.h> 
#include <conio.h> 
void add();
void main() 
{ 
	add();
	getch(); 
} 
void add() 
{ 
	int a, b, c; 
	clrscr(); 
	
	printf("\n Enter Any 2 Numbers : "); 
	scanf("%d %d",&a,&b); 
	c = a + b; 
	printf("\n Addition is : %d",c); 
} 
