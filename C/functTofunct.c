# include <stdio.h> 
struct employee
{ 
  int emp_id; 
  char name[25]; 
  char department[10]; 
  float salary; 
}; 
void main() 
{ 
  static struct employee emp1= { 12, “sadanand”, “computer”, 7500.00 }; 
  /*sending entire employee structure*/ 
  display(emp1); 
} 

display(struct employee  empf) 
{ 
	printf(“%d%s,%s,%f”, empf.empid,empf.name,empf.department,empf.salary); 
} 
