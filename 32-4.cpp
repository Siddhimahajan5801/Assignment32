#include <iostream>
using namespace std;

class Addition
{
public:
    int Add (int a=0, int b=0, int c=0)
    {
        cout<<"\nAddition() called for Integers! \n";
        return a+b+c;
    }

    double Add (double x=0, double y=0, double z=0)
    {
       cout<<"\nAddition () called for doubles! \n";
       return x+y+z;
    }

};

int main ()
{
  Addition obj;

  cout<<"5+6   =  "<<obj.Add(5,6)<<endl;
  cout<<"9+8+4 =  "<<obj.Add(9,8,4)<<endl;

  cout<<"8.3  + 9.6    =  "<<obj.Add(8.3,9.6)<<endl;
  cout<<"71.3 + 92.8   =  "<<obj.Add(71.3,92.8)<<endl;

  return 0;
}
