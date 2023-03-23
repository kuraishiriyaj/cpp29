#include<iostream>
/* create a product class and convert Product type to item type
 using constructor 
  int main()
  {
     item i1;
     Product p1;
     p1.setData(6,3);
     i1=p1;
     return 0;
  }
*/
using namespace std;
class product
{
   int x,y;
   public:
   product(int x,int y):x(x),y(y)
   {
      cout<<"product pc is called"<<endl;
   }
   void display()
   {
      cout<<"x="<<x<<"y="<<y<<endl;
   }
   int getX()
  {
   return x;
  }
  int getY()
  {
   return y;
  }
};
class item
{
   private:
   int i;
   public:
   void display()
   {
      cout<<i<<endl;
   }
   item(product p)
   {
      cout<<"item pc is called"<<endl;
      i=p.getX()+p.getY();
   }
   item()
   {

   }
};
int main()
{
   product s(5,6);
    item i=s;
    s.display();
    i.display();
    return 0;
}