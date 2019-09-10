#include<stdio.h>
void main()
{
  FILE *f1;
  char  c;
  clrscr();
  printf("Data input output");
  f1=fopen("Input","w"); /*Open the file Input*/
  while((c=getchar())!='0') /*get a character from key board*/
  {	
    putc(c,f1);  
  }                    /*write a character to input*/
  fclose(f1);                          /*close the file input*/
  printf("\nData output\n");
  f1=fopen("INPUT","r");                             /*Reopen the file input*/
  while((c=getc(f1))!=EOF)
  {	
    printf("%c",c);
  }
  fclose(f1); 
}
