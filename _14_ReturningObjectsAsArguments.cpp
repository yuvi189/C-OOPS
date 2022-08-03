#include<iostream>
using namespace std;
class abcd
{
    public:
    int age;
    abcd add(abcd x,abcd y)//making a function with return type as class name
    {
        abcd z;
        z.age= x.age + y.age ;
        return z;//returning the object whose properties will be copied to the object using which the functions was called
    }

};


int main()
{
    abcd o1,o2,o3;
    o1.age=10;
    o2.age=30;
    o3.age=0;
    cout<<o3.age<<endl;
    o3 = o3.add(o1,o2);
    cout<<o3.age<<endl;
}