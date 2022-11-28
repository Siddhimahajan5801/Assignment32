#include <iostream>
using namespace std;

class Area
{
public:

    float area_circle;
    int area_rect;
    float area_triangle;

    Area ()
    {
        cout<<"\n Default Constructor called for Area \n";
    }

    Area (float r)
    {
        cout<<"\n Area() called for Circle \n";
        area_circle= 3.14*r*r ;
    }

    Area (int l, int b)
    {
        cout<<"\n Area() called for Rectangle \n";
        area_rect = l*b;
    }

    Area (double h, double b, double useless)
    {
        cout<<"\n Area() called for Triangle \n";
        area_triangle = 0.5*b*h;
    }
} ;

int main ()
{
    int choice;

    cout<<"\n Whose Area do you want to calculate? \n";
    cout<<"\n 1. Circle \n 2. Rectangle \n 3. Triangle \n\n Choice : ";
    cin>>choice;

    switch (choice)
    {
    case 1:
    {
        Area obj1(5);
        cout<<"\n Area of Circle with Radius r=5 :   "<<obj1.area_circle<<endl;
        break;
    }

    case 2:
    {
        Area obj2(5,6);
        cout<<"\n Area of Rectangle with length=5 , breadth=6 :    "<<obj2.area_rect<<endl;
        break;
    }

    case 3:
    {
        Area obj3(4.2,5.6,0);
        cout<<"\n Area of Triangle with height=4.2 , base=5.6 :  "<<obj3.area_triangle<<endl;
        break;
    }

    default :
    {
        cout<<"\n Invalid Choice! \n";
    }

 }

    return 0;

}
