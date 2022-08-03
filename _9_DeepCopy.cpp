#include<iostream>
#include<string.h>
using namespace std;
class Yuvraj
{
    public:
    int age;
    char *name;
    Yuvraj(int age,char *name)
    {
        this -> age=age;
        strcpy(this ->name , name);
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
        Yuvraj obj1(17,a);
        Yuvraj obj2(obj1);
        obj1.get_name();
        obj2.get_name();
        obj1.name[0]='l';
        obj1.get_name();
        obj2.get_name();
        return 0;
    }