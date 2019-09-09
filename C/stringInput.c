#include <stdio.h>

main ( )
{
  char *s1 = "abcd";
  char s2[] = "efgh";
  printf( "%s %16lu \n", s1, s1);
  printf( "%s %16lu \n", s2, s2);
  s1 = s2;
  printf( "%s %16lu \n", s1, s1);
  printf( "%s %16lu \n", s2, s2);
  
}
