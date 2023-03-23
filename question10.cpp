#include<iostream>
/* Create two classes Rupee and Dollor and add necessary function to support
  Rupee to Dollor and Dollor to Rupee conversion
  Example
  int main()
  {
    Rupee r=55;
    Dollor d=r;  Rupee to Dollor conversion
    d.display();
    r.display();
    r=d; Dollor to Rupee conversion
    d.display();
    r.display();
    return 0;
  }
*/
using namespace std;
class Dollor
{
  
  public:
  int d;
   
   Dollor(int a)
   {
    cout<<"Dollor pc is called"<<endl;
     d=a;
   }
   void display()
   {
    cout<<d<<endl;
   }

};
class Rupee
{
  public:
  int r;
  Rupee(int a)
  {
    cout<<"Rupee pc is called"<<endl;
    r=a;
  }
  operator Dollor()
    {
      cout<<"Dollor() is called"<<endl;
        return r;
    }
    void display()
    {
      cout<<r<<endl;
    }
    Rupee (Dollor s)
    {
      cout<<"Rupee (Dollor s) is called"<<endl;
        r=s.d;
    }

  

};
int main()
{
  Rupee r=55;
  Dollor d=r;
   r.display();
   d.display();
   r=d;
   r.display();
   d.display();
   return 0;

}
