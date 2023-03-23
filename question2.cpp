
#include<iostream>
/* write a c++ program to convert Complex type to primitive type
   Example
   int main()
   {
     Complex c1;
      c1.setData(5,4);
      x=c;
     return 0;
   }
*/
using namespace std;
class complex
{
  private:
  int real;
  int img;
  public:
   void setDATA(int a,int b)
   {
      real=a;
      img=b;
   }

   operator int()
  {
      return(img+real);
  }
};
int main()
{
  complex s;
  s.setDATA(5,3);

  int x;
   x=s;
  cout<<x<<endl;
}
