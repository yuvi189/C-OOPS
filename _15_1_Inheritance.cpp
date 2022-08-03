#include<string.h>
#include<iostream>
using namespace std;
class parent
{
    public:
    string name;
    int age;
    private:
    int height;
    float jee_percentile;
    protected:
    string address;
    int mobile_num;
};

class child : private parent
{
    public:
    string get_address()
    {
        return this -> address;
    }
    int get_mobile_num()
    { 
        return this -> mobile_num;
    }
    // int get_height()
    // {
    //     return this -> height;
    // }
    // float get_mobile_num()
    // {
    //     return this -> jee_percentile;
    // }


};

int main()
{
    child obj1;
    // obj1.age=10;//accessing public data member
    // obj1.name="hello";//accessing public data member
    int a=obj1.get_mobile_num();//accessing protected data member
    string ab=obj1.get_address();//accessing protected data member 
    cout<< a<< endl;
    cout<< ab<< endl;

    
}