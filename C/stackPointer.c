#include<stdio.h>
#define maxsize 100

int stack[maxsize];
int stacktop=0;

void push(int);
int pop(void);
void display(void);

int main()
{
int choice=0,val=0;
do
{
printf("\n\t1.Push 2.Pop 3.Display 4.Exit\n\tSelect Your Choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1:
	printf("\tElement to be Pushed : ");
	scanf("%d",&val);
	push(val);
	break;
case 2:
	val=pop();
	if(val!=-1)
	printf("\tPopped Element : %d\n",val);
	break;
case 3:
	display();
	break;
case 4:
	break;
default:
	printf("\tWrong Choice");
	break;
	}
}while(choice!=4);
return 0;

}




