  #include <iostream.h>
  
  int exforsys(int,int);
   
  void main( )
  {
    int b;
    int s=5,u=6;
    b=exforsys(s,u);
    cout<<”\n The Output is:”<<b;    
  }
  
  int exforsys(int x,int y)
  {
    int z;
    z=x+y;
    return(z);
  }
