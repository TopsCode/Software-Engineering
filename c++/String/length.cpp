#include<iostream.h>
int main()
{
            char name[15];
            int i=0;
            cout << " Enter your name " << endl;
            cin >> name;
            while(name[i]!='\0')
            {
                        i++;
            }
            cout << "Lenght of the name is : " << i;
            return(0);
}

