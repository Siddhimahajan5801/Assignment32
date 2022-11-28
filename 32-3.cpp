#include <iostream>
using namespace std;

class Animals
{
public:
    void sound () { cout<<" Sound() called! \n"; }
};

class Dogs : public Animals
{
public:

    void sound () {  cout<<"\n Modified Sound() called! \n"; }
};

int main ()
{
    Animals a1;
    Dogs d1;

    a1.sound();
    d1.sound();

    return 0;
}
