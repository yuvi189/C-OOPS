#include <iostream>
#include <string>
#include<math.h>
using namespace std;
class testing_123// memory/storage allocation does not take place on creation of class
{
    private://private means that the data members can be accessed within the class only
    string name;
    public://public means that the data members can be accessed inside as well as outside the class
    int age;
    void set_name(string name)
    {
        this -> name=name;
    }
    void return_string()
    {
        cout<<name<<endl;/* here the "name" data member can be accessed despite
                            being private because the function is within the class itself */ 
    }
};

int main()
{
    testing_123 obj1;//object creation
                    //memory/Storage allocation takes place on creation of object
    obj1.set_name("yuvraj");
    

}