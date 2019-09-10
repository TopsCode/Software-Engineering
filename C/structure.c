
/* To store 10 student information using Structure */

#include< stdio.h > 
struct s1
{
int id_no; 
char name[20]; 
char address[20]; 
char combination[3]; 
int age; 
}newstudent; 

void main() 
{ 
printf(“Enter the student information”); 

printf(“Now Enter the student id_no”); 
scanf(“%d”,&newstudent.id_no); 
printf(“Enter the name of the student”); 
scanf(“%s”,newstudent.name); 
printf(“Enter the address of the student”); 
scanf(“%s”,newstudent.address); 

printf(“Enter the cmbination of the student”); 
scanf(“%d”,&newstudent.combination); 

printf(“Enter the age of the student”); 
scanf(“%d”,&newstudent.age); 
printf(“Student information\n”); 
printf(“student id_number=%d\n”,newstudent.id_no); 
printf(“student name=%s\n”,newstudent.name); 
printf(“student Address=%s\n”,newstudent.address); 
printf(“students combination=%s\n”,newstudent.combination); 
printf(“Age of student=%d\n”,newstudent.age); 

}

