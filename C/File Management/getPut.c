/*Example program for using getw and putw functions*/

#include<stdio.h>
void main()
{
   FILE *f1,*f2,*f3;
   int number,i;

   printf("\n MYDATA file contents:");
   f1=fopen("MYDATA","w");

   for(i=1;i<30;i++)
   {
     scanf("%d",&number);
     if(number==-1)
     break;
     putw(number,f1);
   }
   fclose(f1);

   f1=fopen("MYDATA","r");
   f2=fopen("ODD","w");
   f3=fopen("EVEN","w");
   
    while((number=getw(f1))!=EOF)
   {
     if(number%2==0)
	     putw(number,f3);
     else
	     putw(number,f2);
   }
   fclose(f1);
   fclose(f2);
   fclose(f3);
   f2=fopen("ODD","r");
   f3=fopen("EVEN","r");
   printf("\n contents of ODD file:  ");
   while((number=getw(f2))!=EOF)
   printf("%d  ",number);
   printf("\n Contents of File EVEN:  ");
   while((number=getw(f3))!=EOF)
   printf("%d  ",number);
   fclose(f2);
   fclose(f3);
   getch();
}

 

