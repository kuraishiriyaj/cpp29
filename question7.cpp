#include<iostream>
/* Create two class Time and Minute add required getter and setter inclutding constructors
  Now you need to type cast Time object into Minute to fetch the minute from Time and display
   it 
   Example
   int main()
   {
     Time t1()
     t1.display();
     Minute m1;
     m1.display();
     m1=t1; fetch minute from time
     m1.display();
     return 0;
   }
*/
using namespace std;
class Time
{
  private:
   int x;
   public:
  void setX(int a)
   {
        x=a;

   }
   int getX()
   {
    return x;
   }

   void display()
   {
    cout<<x<<endl;
   }
  
};
class Minute
{
  private:
  int x;
  public:
  Minute(Time t)
  {
      x=t.getX();
  }
  Minute()
  {
    
  }
  void setX(int a)
  {
     x=a;
  }
 
 void display()
 {
  cout<<x<<endl;
 }
  
};
int main()
{
  Time t1;
  t1.setX(56);
  t1.display();
  Minute m1;
  m1.setX(5);
  m1.display();
  m1=t1;
  m1.display();
return 0 ;
}