#include< stdio.h > 
struct info 
{ 
  int id_no; 
  char name[20]; 
  char address[20]; 
  char combination[3]; 
  int age; 
}struct info std[100]; 

void  main()
{ 
	int I,n; 
	printf(“Enter the number of students”); 
  scanf(“%d”,&n); 
  printf(“ Enter Id_no,name address combination age\m”); 
	for(I=0;I < n;I++) 
	  scanf(%d%s%s%s%d”,&std[I].id_no,std[I].name,std[I].address,std[I].combination,&std[I].age); 
	printf(“\n Student information”); 
	
	for (I=0;I< n;I++) 
		printf(“%d%s%s%s%d\n”,  std[I].id_no,std[I].name,std[I].address,std[I].combination,std[I].age); 
}
