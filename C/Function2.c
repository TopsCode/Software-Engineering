#include<stdio.h>
#include<conio.h>

void printno(int n){
  printf("\n Number is :%d",n);

}

void main(){
  int no;
  void printno(int);
  clrscr();
  printf("Enter number: ");
  scanf("%d",&no);
  printno(no);
  getch();



}
