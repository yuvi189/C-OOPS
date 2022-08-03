/*
1.basic to user-defined
2.user defined to basic
3.user defined to user defined

*/

#include<iostream>
using namespace std;
class test
{
    double a;
    double b;
    public:
    test()
    {

    }
    test(double v)
    {
        this->a=v;
        this->b=v;
    }
};

int main()
{
    double x;
    test t1;
    t1=x;
}