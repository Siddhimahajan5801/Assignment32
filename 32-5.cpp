#include<iostream>
using namespace std;

class A
{
public:

    A () {  cout<<"\n Default Constructor called for A!  \n"; }

    A (int x)
    {
        cout<<"\n Constructor called for integer! \n";
    }

    A (int a, double b)
    {
        cout<<"\n Constructor with 2 arguments called!  \n";
    }
};

class B : public A
{
public:

    B () : A()
    {
        cout<<"\n Default Constructor called for B!  \n";
    }

    B (int x) : A(5)
    {
        cout<<"\n Parameter Constructor called for B!  \n";
    }

    B ( int x, int y) : A(5,9.3)
    {
        cout<<"\n Parameter Constructor called for B!  \n";
    }



};

int main ()
{
    B obj1, obj2(5), obj3(8,3);

    return 0;
}
