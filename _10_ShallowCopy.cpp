/* 

The difference between shallow copy and deep copy is that
When we create an object using shallow copy, we are basically calling the same memory space using a different name.

whereas,In the case of deep copy , an entire separate copy of the object is created which uses a diffeent memory
space.

Default copy constructor executes shallow copy
For deep copy we need to creat our own copy constructor 


 */





#include<iostream>
#include<string.h>
using namespace std;
class Yuvraj
{
    public:
    int age;
    char *name;
    Yuvraj()
    {
        name=new char[100];
    }
    void set_name(char name[])
    {
        strcpy(this -> name,name);
    }
    void set_age(int age)
    {
        this -> age= age;
    }
    void get_name()
    {
        cout<< this -> name <<endl;
    }
    Yuvraj(Yuvraj &x)//copy constructor for Deep Copying
    {
        char *ch=new char[strlen(x.name)+1];//creating an intermediate variable to store name of object
        strcpy(ch,x.name);//copying the name of the object in the intermediate variable
        this -> name= ch;
        this -> age = x.age;
    }
    
};
int main()
    {
        char a[10]="ghodu";
        Yuvraj obj1;
        obj1.set_age(17);
        obj1.set_name(a);
        Yuvraj obj2(obj1);
        obj1.get_name();
        obj2.get_name();
        obj1.name[0]='l';
        obj1.get_name();
        obj2.get_name();
        return 0;
    }