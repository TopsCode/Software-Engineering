#include <stdio.h> 
#include <conio.h> 

void main() 
{ 
	int i; 
	
	void incre(void); 
	
	clrscr(); 
	for (i=0; i<3; i++) 
		incre(); 
	
	getch(); 
} 
void incre(void) 
{ 
	int avar=1; 
	static int svar=1; 
	avar++; 
	svar++; 
	printf("\n\n Automatic variable value : %d",avar); 
	printf("\t Static variable value : %d",svar); 
}
