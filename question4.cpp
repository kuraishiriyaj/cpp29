#include<iostream>
/* Create Product class and convert Product type to item type using casting operator
  int main()
  {
     item i1;
     product p1;
     p1.setData(3,6);
     i1=p1;
     return o;
  }
*/
using namespace std;
class item
{
  int a;
  public:
  item()
  {
    cout<<"item dc is called"<<endl;
  }
  item(int a):a(a)
  {

  }
  void display()
  {
    cout<<a<<endl;
  }

};
class product
{

  int x;
  int y;
  public:
  product(int x,int y):x(x),y(y)
  {
    cout<<"product pc is called"<<endl;
  }
  operator item()
  {
    return (x+y);
  }
  void display()
  {
    cout<<x<<y<<endl;
  }
  
};
int main()
{
  item i;
  product p(7,4);
   
  
   p.display();
   i=p;
   i.display();
  
   return 0;
}



