class example 
{
	public: 
		int health; 
		example(int h) 
		{
			 health = h;
	 	}
 };
example character(99);
int main()
{
	cout <<character.health;
} 
class Line
{
	public:
	int getLength( void );
	Line( int len ); // Parameterize constructor
	Line( const Line &obj); // copy constructor
	~Line(); // destructor
}; 
