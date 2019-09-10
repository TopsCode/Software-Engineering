#include<iostream.h>                
int main ()
{
            int age[2][5]= { {12,13,14,15,15}, { 12,16,17,13,12}};
            int i,j;
            int sum=0,avg=0;
            for(i=0;i<2;i++)
            {
                        for(j=0;j<5;j++)
                        {
                                    sum=sum+age[i][j];
                        }
                        avg=sum/5;
                        cout << “\nAverage of the elements of the row " << i+1  << " is " << avg;
                        sum=0;
            }
            return(0);
}
