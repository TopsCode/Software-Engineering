#include <iostream.h>
const int ROW=4;
const int COLUMN =3;

void main()
{
  int i,j;
  int Exforsys[ROW][COLUMN];
  
  for(i=0;i<ROW;i++)
  {
      for(j=0;j<COLUMN;J++)
      {
        cout << "Enter value of Row "<<i+1;
        cout<<",Column "<<j+1<<":";
        cin>>Exforsys[i][j];
       }
	}
  cout<<"\n\n\n";
  cout<< " COLUMN\n";
  cout<< " 1 2 3";
  for(i=0;i<ROW;i++)
  {
    cout<<"\nROW "<<i+1<<“\n”;
    for(j=0;j<COLUMN;J++)
      cout<<Exforsys[i][j]; 
  }
  
  
 }

