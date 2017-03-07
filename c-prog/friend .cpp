#include<iostream>
using namespace std;
class Y;
class demo{
  public:
  void show(Y&)
    
};
class Y{
  
  int y;
  public:
  void puty(int value)
  {
      y=value;
  }
  friend demo :: show(Y&)
};

void demo :: show(Y& ob)
{
     cout<<"the Y is "<<ob.y<<endl;
}
int main()
{
    Y obj1;
    obj1.puty(121);
    demo obj;
    obj.show();
}