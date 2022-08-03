/*
Inheritance ambiguity exists during Multiple Inheritance.

->Suppose there are 2 parent classes.
->Both these parent classes consist of a function with the exact same name.
->We create a sub-class which inherits both these parent classes.
->We create an object of this sub-class.
->Using the object of the sub-class we try to run that function which has the same name in both the classes.
->This causes an Ambiguity as there is no 

*/

#include<iostream>
using namespace std;
class a
{
    public:
    void fun()
    {
        cout<<"inside a"<<endl;
    }
};
class b
{
    public:
    void fun()
    {
        cout<<"inside b"<<endl;
    }
};
class c: public a,public b
{

};
int main()
{
    c obj;
    obj.a::fun();
    obj.b::fun();
}