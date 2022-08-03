#include<iostream>
using namespace std;
class test1
{
    double a;
    double b;
    public:
    test1()
    {

    }
    test1(double a,double b)
    {
        this->a=a;
        this->b=b;
    }


};

class test2
{
    double c;
    double d;
    public:
    test2()
    {

    }
    test2(double c,double d)
    {
        this->c=c;
        this->d=d;
    }
    operator test1()
    {
        return test1(c,d);
    }
};
int main()
{
    test1 obj1(10,20);
    test2 obj2(90,100);
    obj1=obj2;
}