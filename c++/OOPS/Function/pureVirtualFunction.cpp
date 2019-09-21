 #include<iostream.h>
       #include<conio.h>

       class BaseClass       //Abstract class
       {

              public:
               virtual void Display1()=0;     //Pure virtual function or abstract function
               virtual void Display2()=0;     //Pure virtual function or abstract function

               void Display3()
               {
                      cout<<"\n\tThis is Display3() method of Base Class";
               }

       };

       class DerivedClass : public BaseClass
       {

              public:
               void Display1()
               {
                      cout<<"\n\tThis is Display1() method of Derived Class";
               }

               void Display2()
               {
                      cout<<"\n\tThis is Display2() method of Derived Class";
               }

       };

       void main()
       {

              DerivedClass D;

              D.Display1();            // This will invoke Display1() method of Derived Class
              D.Display2();            // This will invoke Display2() method of Derived Class
              D.Display3();            // This will invoke Display3() method of Base Class

       }
