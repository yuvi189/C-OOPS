#include<iostream>
using namespace std;
class abcd
{
    int age;
    string name;
    public:
    static double height;
    abcd(abcd &obj)
    {
        this -> age=obj.age;
        this -> name=obj.name;
    }
    abcd()//default constructor
    {
        abcd::height++;
    }
    abcd(int age,string name)//parametrized constructor
    {
        this -> age=age;
        this -> name=name;
    }
    void set_age_name(int age,string name)//setter
    {
        this -> age=age;
        this -> name=name;
    }
    void display_age_name()
    {
        cout<<"Age = "<<this -> age<<endl;
        cout<<"Name = "<<this -> name<<endl;
    }
    void displayGreeting();//declaration of a function
    void displayHeight()
    {
        cout<<abcd::height<<endl;
    }
};

double abcd::height=10;

void abcd::displayGreeting()//defining a function outside the class using scope resolution
{
    cout<<"Hello World"<<endl;
}
int main()
{
    abcd *obj1=new abcd;//Dynamic creation of objects
    (*obj1).set_age_name(18,"Yuvraj");//One way to call functions of a dynamic object
    obj1 -> display_age_name();//alternative way to call functions of a dynamic object
    abcd obj2(*obj1);//using copy constructor to copy the values of obj1 in obj2
    obj2.display_age_name();
    abcd obj3;//static object creation
    obj3.set_age_name(22,"girish");
    abcd obj4(obj3);//using copy constructor to copy the values of obj3 in obj4
    obj3.display_age_name();
    obj4.display_age_name();
    obj1 ->displayGreeting();
    obj3.displayGreeting();
    obj1 ->displayHeight();
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    abcd *dynamic_arr=new abcd[n];//creating an array of objects dynamically
    for(int i=0;i<n;i++)
    {
        int age;
        string name;
        cout<<"Enter age"<<endl;
        cin>>age;
        cout<<"Enter name"<<endl;
        cin>>name;
        (*(dynamic_arr+i)).set_age_name(age,name);
    }
    for(int i=0;i<n;i++)
    {
        dynamic_arr->display_age_name();
        dynamic_arr++;
    }
    abcd static_arr[n];//creating an array of objects statically
    for(int i=0;i<n;i++)
    {
        int age;
        string name;
        cout<<"Enter age"<<endl;
        cin>>age;
        cout<<"Enter name"<<endl;
        cin>>name;
        static_arr[i].set_age_name(age,name);   
    }
    for(int i=0;i<n;i++)
    {
        static_arr[i].display_age_name();
    }






}
