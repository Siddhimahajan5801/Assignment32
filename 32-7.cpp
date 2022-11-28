#include <iostream>
using namespace std;

class A
{
public:
    A () { cout<<"\n Default Constructor called for A \n"; }

    A (int x) { cout<<"\n Parameter Constructor called for A \n"; }
};

class B : public A
{
public:

    B ()
    {
        cout<<"\n Default constructor called for B \n";
    }

    B (int b) : A(5)
    {
        cout<<"\n Parameter constructor called for B \n";
    }
};

int main ()
{
    B obj1 , obj2(5);

    return 0;
}
