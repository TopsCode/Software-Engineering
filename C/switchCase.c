#include <stdio.h>
main(){
  int i,n = 5;
  for(i = 1; i<n; i= i+1){
    switch(i%2){
      case 0 : 
              printf("the number %d is even \n",i);
              break;
      case 1 :
              printf("the number %d is odd \n",i);
              break;
    }
    
  }
}

