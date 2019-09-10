# include < stdio.h > 
struct e1
{
  int emp_id; 
  char name[25]; 
  char department[10]; 
  float salary; 
};
void main() 
{ 
     struct e1 emp1={125,”sampath”,”operator”,7500.00}; 
     /* pass only emp_id and name to display function*/ 
     display(emp1.emp_id,emp1.name); 
} 

/* function to display structure variables*/ 
display(int e_no,int e_name) 
{ 
	printf(“%d %s”,e_no,e_name);
}
