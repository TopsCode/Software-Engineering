# include < stdio.h > 	// assigns stdio-h header file to your program 

void main () 			// Indicates the starting point of the program. 
{ 
	char ch; 		// variable declaration 
	
	printf (“Type one character:”) ; // message to user 
	
	ch = getchar () ; // get a character from key board and Stores it in variable ch. 
	printf (” The character you typed is = %c”, ch) ;
}
