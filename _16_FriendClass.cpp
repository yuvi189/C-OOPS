/*

A Friend Class can access the private and protected data members and functions 
of the the class in which it is declared as a friend.

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
    friend class ghodu;
};

class ghodu
{
    string name;
    public:
    void set_name(string name)
    {
        this -> name = name;
    }
    void display_age(yuvraj y)
    {
        cout<< y.age << endl;
    }

};


int main()
{
    yuvraj obj1;
    ghodu obj2;
    obj1.set_age(18);
    obj2.set_name("ghoduuuuuu");
    obj2.display_age(obj1);
   
}