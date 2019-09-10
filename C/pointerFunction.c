#include <stdio.h>
void DoubleIt(int *num)
{
        *num*=2; 
}
int main()
{ 
        int number=2; 
                DoubleIt(&number);
                        printf("%d",number);
return 0; 
}
