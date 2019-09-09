#include <stdio.h>

int main(void)
{
  char str1[] = "AAA";
  int count = 0;         
  while (str1[count] != '\0')
      count++;                     
  printf("\nThe length of the string \"%s\" is %d characters.", str1, count);
  return 0;
  
 }
