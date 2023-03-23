#include<iostream>
/* write a c++ program to convert Primitive type to Complex type example
   int main()
   {
       Complex c1;
       int x=6;
       c1=x;
       return 0;
   }
*/
using namespace std;
class complex
{
   private:
   
   int img;
    int real;
   public:
   complex()
   {

   }
   complex (int a)
   {
    
      img=a;
      real=a;
   }
   void display()
   {
    cout<<"img="<<img<<"+"<<real<<"i";
   }
};
int main()
{
  complex s;
   int x=7;
   s=x;
  s.display();

return 0 ;
}