/*

Binary operator overloading:-
1.Arithmetic Operators
   +,-,*,/,%

2.Relational Operators
   <,<=,>,>=,==,!=


*/
#include<iostream>
using namespace std;
class test
{
    int a,b,c;
    public:
    void setData(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void getData()
    {
        cout<<"a is"<<this->a<<endl;
        cout<<"b is"<<this->b<<endl;
        cout<<"c is"<<this->c<<endl;
    }
    test operator+(test obj)//overloading arithmetic + operator
    {
        test x;
        x.a=(this->a)+obj.a;
        x.b=(this->b)+obj.b;
        x.c=(this->c)+obj.c;
        return x;
    }
    test operator-(test obj)//overloading arithmetic - operator
    {
        test x;
        x.a=(this->a)-obj.a;
        x.b=(this->b)-obj.b;
        x.c=(this->c)-obj.c;
        return x;
    }
};
int main()
{
    test t1,t2,t3,t4;
    t1.setData(10,20,30);
    t2.setData(30,20,10);
    t3=(t1+t2);
    t3.getData();
    t4=t2.operator+(t1);
    t4.getData();
    t3=t4-t1;
    t3.getData();

}