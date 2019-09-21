
#include <iostream.h>
#include <conio.h>


class human {
  public:
    string name;
    int age;
};

int main () {
  human exhibitA;
  human exhibitB;

  exhibitA.name = "Michael";
  exhibitA.age = 25;

  exhibitB.name = "Nerfetiti";
  exhibitB.age = 24;

  cout <<"Exhibit A's Name is "<< exhibitA.name << endl;
  cout <<"Exhibit A's Age is "<< exhibitA.age << endl;

  cout <<"Exhibit B's Name is "<< exhibitB.name << endl;
  cout <<"Exhibit B's Age is "<< exhibitB.age << endl;
  getch();
  return 0;
}
