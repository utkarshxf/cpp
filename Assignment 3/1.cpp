// WAP to swap private data member of two classes.[The classes have no relation with each other].
#include<iostream>
using namespace std;
class c1
{
  int a = 10;

public:
  void show()
  {
    cout << "\n Value of Number 1: " << a;
  }
  friend c1 swaap(c1 &a, c2 &b);
};

class c2
{
  int b = 20;

public:
  void show()
  {
    cout << "\n Value of Number 2: " << b;
  }
  friend c2 swaap(c1 &a, c2 &b);
};
void swaap(c1& a, c2& b)
{
  int q;
  q=c1.a;
  c1.a=c2.b;
  c2.b=q;
  
}

int main()
{
c1 a;
c2 b;
swaap(a,b);
a.show();
b.show();
return 0;
}

