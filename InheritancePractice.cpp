#include<iostream>
#include<string.h>
using namespace std;
class parent
{
    protected:
    string name;
    int age;
    double marks;

    

};

class child : private parent
{
    public:
    void print_details()
    {
        cout<<this->name;
        
    }
};


int main()
{

}