#include <iostream.h>
#include<conio.h>

//max returns the maximum of the two elements of type T, where T is a
//class or data type for which operator> is defined.
template <class T>
T max(T a, T b)
{
    return a > b ? a : b ;
}

int main()
{    
    cout << "max(10, 15) = " << max(10, 15) << endl ;
    cout << "max('k', 's') = " << max('k', 's') << endl ;
    cout << "max(10.1, 15.2) = " << max(10.1, 15.2) << endl ;
    cout << "max(\"Aladdin\", \"Jasmine\") = " << max("Aladdin", "Jasmine") << endl ;
    return 0 ;
}
