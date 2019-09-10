#include <stdio.h> 
#include <conio.h> 

int number() 
{ 
	int no; 
	
	printf("\n Enter Number : "); 
	scanf("%d",&no); 
	return no; 
} 
void main() 
{ 
	int no; 
	int number(); 
	clrscr(); 
	no = number(); 
	printf("\n Number is : %d",no); 
	getch(); 
}
