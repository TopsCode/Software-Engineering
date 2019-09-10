#include<iostream.h>           
int main ()
{ 
          int age[10];
          int i,sum=0, avg=0, max=0,min=100;
          for(i=0;i<10;i++)
          {
                      cout << "Enter the age of the student  " << i+1 <<endl;
                      cin >> age[i]; 
          }
          for(i=0;i<10;i++)
          {
                       sum=sum+age[i];
                       if(age[i]>max)
                       {
                                   max=age[i];
                       }
                       if(age[i]<min)
                       {
                                   min=age[i];
                       }
           }
           avg=sum/10;
           cout << "Average age of the students of the class : " << avg << endl;
           cout << "Maximum age of the student of the class : " << max << endl;
           cout << "Minimum age of the student of the class : " << min << endl;
           return(0);
}
