#include <iostream.h>
#include<conio.h>
class mm
  {
    protected:
      int rollno;
    public:
      void get_num(int a)
	{ rollno = a; }
      void put_num()
	{ cout << "Roll Number Is:\n"<< rollno << "\n"; }
  };
class marks : public mm
  {
    protected:
      int sub1;
      int sub2;
    public:
      void get_marks(int x,int y)
	{
	   sub1 = x;
	   sub2 = y;
	}
      void put_marks(void)
	{
	  cout << "Subject 1:" << sub1 << "\n";
	  cout << "Subject 2:" << sub2 << "\n";
	}
   };
   
   class res : public marks
   {
     protected:
       float tot;
     public:
       void disp(void)
	  {
	    tot = sub1+sub2;
	    put_num();
	    put_marks();
	    cout << "Total:"<< tot;
	  }
   };
int main()
   {
     res std1;
     std1.get_num(5);
     std1.get_marks(10,20);
     std1.disp();
     getch();
     return 0;
  }

   
