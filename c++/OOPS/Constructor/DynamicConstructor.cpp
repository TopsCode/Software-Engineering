#include <iostream.h>
#include <conio.h>

class Account
{
	private:
	int account_no;
	int balance;

	public :
	Account(int a,int b)
	{
      account_no=a;
      balance=b;
	}

	void display()
	{
       cout<< "\nAccount number is : "<< account_no;
       cout<< "\nBalance is : " << balance;
  }
};



void main()
{
    clrscr();
    int an,bal;

    cout<< "Enter account no : ";
    cin >> an;

    cout<< "\nEnter balance : ";
    cin >> bal;

    Account *acc=new Account(an,bal); //dynamic constructor

    acc->display(); //'->' operator is used to access the method

    getch();
}
