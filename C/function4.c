/* Program to demonstrate function call by passing and returning value.*/#include <stdio.h> 
#include <conio.h> 
int number(int n) 
{ 
	return n; 
} 
void main() 
{ 
	int number(int); 
	int a = number(4); 
	
	clrscr(); 
	printf("\n Number is : %d",a); 
}	
	getch(); 
} 
