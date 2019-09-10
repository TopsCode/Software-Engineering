# include<stdio.h> 
int factorial(unsigned int number) 
{ 
	if(number <= 1) 
		return 1; 
		return number * factorial(number - 1); 
}
void main() 
{ 
	int x = 5; 
	printf("factorial of %d is %d",x,factorial(x)); 
} 
