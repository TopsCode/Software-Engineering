#include<iostream.h>
#include<conio.h>

	void main()
	{

		int size,i;
		int *ptr;

		cout<<"\n\tEnter size of Array : ";
		cin>>size;

		ptr = new int[size];
		//Creating memory at run-time and return first byte of address to ptr.


	  for(i=0;i<5;i++)        //Input arrray from user.
	  {
		 cout<<"\nEnter any number : ";
		 cin>>ptr[i];
	  }

	  for(i=0;i<5;i++)         //Output arrray to console.
	  cout<<ptr[i]<<", ";

	  delete[] ptr;
	  //deallocating all the memory created by new operator

	}
