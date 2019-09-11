#include<iostream.h>
#include<conio.h>
class A
{
	public:
	int i;
};

class B : virtual public A
{
	public:
	int j;
};

class C: virtual public A
{
	public:
	int k;
};

class D: public B, public C
{
	public:
	int sum;
};


int main()
{ 
    clrscr();
    D ob;
    ob.i = 10; //unambiguous since only one copy of i is inherited.
    ob.j = 20;
    ob.k = 30; 
    ob.sum = ob.i + ob.j + ob.k;
    cout <<"Value of i is : "<< ob.i<<"\n";
    cout << "Value of j is : "<< ob.j<<"\n";
    cout << "Value of k is :"<< ob.k<<"\n";
    cout << "Sum is : "<< ob.sum <<"\n";
    getch();
    return 0;
}
