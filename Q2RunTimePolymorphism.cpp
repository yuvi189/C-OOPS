//Q2 Run time Polymorphism

#include<iostream>
#include<string.h>
using namespace std;
class test//abstract class
{
    int age;
    string name;
    public:
    virtual void fun()=0;//pure virtual function
};

class child1 : public test
{
    public:
    void fun()//overriding pure virtual function
    {
        cout<<"child1 clalled"<<endl;
    }
};

class child2 : public test
{
    public:
    void fun()//overriding pure virtual function
    {
        cout<<"child2 called"<<endl;
    }
};

int main()
{
    test *obj1=new child1();
    test *obj2=new child2();
    obj1->fun();
    obj2->fun();


}