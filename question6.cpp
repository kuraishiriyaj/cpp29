#include<iostream>
/* Create a Time class and take Duration in seconds Now you need to convert
   seconds(i .eint) to Time class
    Example
    int main()
    {
        int duration;
        cout<<"Enter time duration in minutes"<<endl;
        cin>>duration;
        Time t1=duration;
        t1.display();
        return 0;
    }
*/
using namespace std;
class Time
{
    int a;
    public:
    Time( int x)
    {
        a=x;
    }
    void display()
    {
        cout<<"a="<<a<<endl;
    }
};
int main()
{
    int duration;
    cout<<"enter is the duration in minute"<<endl;
    cin>>duration;
    Time t1=duration;
    t1.display();

return 0 ;
}