/*

A friend function is an external function which when declared as a friend in a  class,can 
be used with the objects of that class.

*/

#include<iostream>
#include<string.h>
using namespace std;
class ghodu;
class yuvraj
{
    int age;
    public:
    void set_age(int age)
    {
         this -> age= age;
    }
    friend void sum(yuvraj,ghodu);
};

class ghodu
{
    string name;
    public:
    void set_name(string name)
    {
        this -> name = name;
    }
    friend void sum(yuvraj,ghodu);
};
void sum(yuvraj y, ghodu g)
{
    cout<<g.name<<" is "<<y.age<<"years old"<<endl;
}

int main()
{
    yuvraj obj1;
    ghodu obj2;
    obj1.set_age(18);
    obj2.set_name("ghoduuuuuu");
    sum(obj1,obj2);
}