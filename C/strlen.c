#include < stdio.h > 
#include < string.h > 
void main() 
{ 
char name[100]; 
int length; 

printf(“Enter the string”); 
gets(name); 

length=strlen(name); 

printf(“\nNumber of characters in the string is=%d”,length); 
}  
