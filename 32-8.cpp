#include<iostream>
using namespace std;

class Factorial
{
public:
    int num, fact;

    Factorial () { num=0; fact=1; }

    Factorial (int n) { num=n; fact=1; }

    Factorial (Factorial &f)
    {
        num = f.num;
    }

    void facto()
    {
        for (int i=1; i<=num; i++)
        {
            fact= num*i;
        }
    }

    void DisplayFact()
    {
        cout<<"\n Factorial of "<<num<<" is  :  "<<fact<<endl;
    }
};

int main ()
{
    Factorial f1(5);

    f1.facto();
    f1.DisplayFact();

    Factorial f2=f1;
    f2.facto();
    f2.DisplayFact();

    return 0;

}

