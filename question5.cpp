#include<iostream>
/* Create two classes Invent1 and Invent2 and also add necessary constructors in it Now 
  add function to support Invent1 to Invent2 type
  Example
   int main()
   {
     Invent1 x(6,3);
      Invent2 y;
      float z;
      z=x; Invet1 to float
      y=x; Invent1 to Invent2
      return 0;

   }
*/
using namespace std;
class Invent1
  
{  private:
    int a;
    int b;
    public:
    void setX(int x)
    {
      a=x;
    }
    void setY(int y)
    {
       b=y;
    }
    int getX()
    {
      return a;
    }
    int getY()
    {
      return b;
    }
    void display()
    {
      cout<<a<<endl<<b<<endl;
    }
    operator float()
    {
      return(a+b);
    }

};
class Invent2
{
   private:
   int x;
   public:
   Invnet2(int y)
   {
       x=y; 
   }
   Invent2()
   {

   }
   Invent2( Invent1 a)
   {
     x=a.getX()+a.getY();
   }
   void display()
   {
    cout<<x<<endl;
   }
};
int main()
{
  Invent1 a ;
   a.setX(6);
   a.setY(7);
  Invent2 b;
  a.display();
  float z=a;
  cout<<z<<endl;
  b=a;
  b.display();




  return 0;
}