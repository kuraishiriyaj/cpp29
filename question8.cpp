#include<iostream>
/* Create a Rupee class convert it into int And Display it 
 Example
  int main()
  {
     Rupee r=20;
     int x=r;
     cout<<x;
     return 0;
  }
*/
using namespace std;
class Rupee
{
    private:
    int r;
    public:
    Rupee(int r):r(r)
    {
      cout<<"Rupee pc is called"<<endl;
    }
    operator int()
    {
      return r;
    }
   
};
int main()
{
   Rupee r=67;
   int x=r;
   cout<<x;

return 0 ;
}