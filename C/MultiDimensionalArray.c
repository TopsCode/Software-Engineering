/* example program to add two matrices & store results in 3rd matrix */ 

#include< stdio.h > 
#include< conio.h > 
void main() 
{ 
int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q; 
clrscr(); 

printf(“enter the order of the matrix\n”); 
scanf(“%d%d”,&p,&q); 
	
        if(m==p && n==q) 
        { 
printf(“matrix can be added\n”); 
printf(“\n enter the elements of the matrix  A\n”); 

	for(i=0;i <m;i++) 
		for(j=0;j <n;j++) 
			scanf(“%d”,&a[i][j]); 
	
	printf(“\n enter the elements of the matrix  B\n”); 

	for(i=0;i <p;i++) 
		for(j=0;j < q;j++) 
			scanf(“%d”,&b[i][j]); 

	printf(“the sum of the matrix a and b is”); 

	for(i=0;i < m;i++) 
		for(j=0;j < n;j++) 
			c[i][j]=a[i][j]+b[i][j]; 
		for(i=0;i < m;i++) 
		{ 
			for(j=0;j < n;j++) 
				printf(“%d\t”,&a[i][j]); printf(“\n”);} 
          } 
} 

