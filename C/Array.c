#include< stdio.h > 

void main( ) 
{ 
	int  a[50],n,count_neg=0,count_pos=0,I; 
	printf(“Enter the size of the array\n”); 
	scanf(“%d”,&n); 
	printf(“Enter the elements of the array\n”); 
	
	for( I=0;I < n;I++) 
               {
		scanf(“%d”,&a[I]); 
	
		for(I=0;I < n;I++) 
		{ 
			if(a[I] < 0) 
				count_neg++; 
			else 
				count_pos++; 
		}
	}

	printf(“There are %d negative numbers in the array\n”,count_neg); 
	printf(“There are %d positive numbers in the array\n”,count_pos); 
} 
