#include <iostream.h>
class Value
{
	protected:
		int val; 
	public:
	void set_values (int a)
	 { 
		val=a;
	 }
 };
class Cube:public Value
{ 
	public:
	int cube()
	{
		return (val*val*val);
	}
 };
int main ()
{
	Cube cub;
	cub.set_values (5);
	cout << "The Cube of 5 is::" << cub.cube() << endl; 
	return 0;
} 
