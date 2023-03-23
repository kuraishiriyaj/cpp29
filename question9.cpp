#include<iostream>
/* create a Dollor class and add necessary functions to support int to 
DOLLOR TYPE CONERSION
  Example
  int main()
  {
     int x=56;
     Dollar d;
     d=x;
     d.display();
     return 0;
     
  }
*/
using namespace std;
class Dollor
{
   int x;
   public:
   Dollor()
   {

   }
   Dollor(int x):x(x)
   {
    cout<<"Dollor class pc is called"<<endl;
   }
   void display()
   {
    cout<<x;
       }
};
int main()
{
 int x=67;
 Dollor d;
 d=x;
 d.display();
return 0 ;
}