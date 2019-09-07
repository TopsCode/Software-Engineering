
	#include <stdio.h>
	#include <conio.h>	
	void main()
	{	
		int a,b,c,d,e,f,g;	
		clrscr();	
		printf("\n\t Enter First Number :");    // 5	
		scanf("%d",&a);	
		printf("\n\t Enter Second Number :");   // 2	
		scanf("%d",&b);	
		c = a + b;	
		printf("\n\n\t Addition is : %d",c);   // 7	
		d = a - b;	
		printf("\n\n\t Subtraction is : %d",d);  // 3	
		e = a * b;	
		printf("\n\n\t Multiplication is : %d",e);  // 10	
		f = a / b;	
		printf("\n\n\t Division is : %d",f); // 2	
		g = a % b;	
		printf("\n\n\t Modulus is : %d",g); // 1	
		getch();
}
