#include <iostream.h>
#include<conio.h>

class MyInterface {
	public:
		virtual void Display() = 0;
};
class MyClass1 : public MyInterface {
	public:
		void Display() {
		cout << "MyClass1" << endl;
	}
};

class MyClass2 : public MyInterface {
public:
	void Display() {
	cout << "MyClass2" << endl;
       }
};


void main()
{
	clrscr();
	MyClass1 obj1;
	obj1.Display();

	MyClass2 obj2;
	obj2.Display();
	getch();
}

