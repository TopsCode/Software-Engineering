#include <iostream>
class MyClass 
{
	 // Declare a friend class 
	friend class SecondClass;
	Public:
	MyClass() : Secret(0){} 
	void printMember() 
	{ 
		cout << Secret << endl; 
	}
	Private:
		int Secret; 
};

class SecondClass
{
	Public:
	void change( MyClass& yourclass, int x )
	 { 
		yourclass.Secret = x;
	 } 
};
void main()
{ 
	MyClass my_class;
	SecondClass sec_class;
	my_class.printMember();
	sec_class.change( my_class, 5 );
	my_class.printMember(); 
	Reutn 0;	
} 
