#include <stdio.h>
	#include <conio.h>
	void main()
	{	
		int a,b;	
		clrscr();
		a = 18;	
		b = 4;	
		printf("\n\t Value of A : %d",a);  // 18	
		printf("\n\t Using of B : %d",b);  // 4	
		b += a ;  // b = b + a	
		printf("\n\n\t Using += (i.e b=b+a): %d",b); // 22	
		// Change the operator as -=, *=, /=, %=	
		getch();
}
