main ()
{ 
     int n, sum = 0, i = 0 ;

     printf ("Enter a number") ;
     scanf ("%d", &n); 

     loop:
     i++ ;                                     
     sum += i ; 

     if (i < n) 
	goto loop;
     printf ("\n sum of %d natural numbers = %d", n, sum) ;
} 
