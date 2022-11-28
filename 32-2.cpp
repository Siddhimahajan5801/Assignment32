#include <iostream>
using namespace std;

class Rectangle
{
public:
    int Area (int l, int b)
    {
       cout<<"\nArea Function called for integer! \n";
       return l*b;
    }

    double Area (double x, double y)
    {
        cout<<"\n Area Function called for double! \n";
        return x*y;
    }
};

int main ()
{
    Rectangle obj1;

    cout<<"\nArea of rectangle with \nlength=5 , breadth=6 is : "<<obj1.Area(5,6)<<endl;

    cout<<"\nArea of rectangle with \nlength=8.26 , breadth=7.56 is : "<<obj1.Area(8.26,7.56)<<endl;


    return 0;
}
