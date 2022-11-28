#include <iostream>
using namespace std;

class Float
{
public:

    float num;

    Float () {   }

    Float (float x) {  num=x;  }

    void Display() { cout<<"Float = "<<num<<endl; }

    Float operator + (Float &f)
    {
        Float temp;
        temp.num= num + f.num;

        return temp;
    }

    Float operator - (Float &f)
    {
        Float temp;
        temp.num= num - f.num;

        return temp;
    }

    Float operator * (Float &f)
    {
        Float temp;
        temp.num= num * f.num;

        return temp;
    }

    Float operator / (Float &f)
    {
        Float temp;
        temp.num= num / f.num;

        return temp;
    }
};

int main ()
{
    Float f1(82.6), f2(52.67),f3;

    cout<<"f1 : ";
    f1.Display();

    cout<<"f2 : ";
    f2.Display();

    cout<<"\n--------------------------------\n";
    cout<<"f3 = f1 + f2 \n\n";
    f3=f1+f2;
    f3.Display();

    cout<<"\n--------------------------------\n";
    cout<<"f3 = f1 - f2 \n\n";
    f3=f1-f2;
    f3.Display();

    cout<<"\n--------------------------------\n";
    cout<<"f3 = f1 x f2  \n\n";
    f3=f1*f2;
    f3.Display();

    cout<<"\n---------------------------------\n";
    cout<<"f3 = f1 / f2 \n\n";
    f3=f1/f2;
    f3.Display();
    cout<<"\n---------------------------------\n";


    return 0;
}
