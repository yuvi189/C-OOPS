#include<iostream>
#include<string.h>
using namespace std;
class test
{
    int age;
    string name;
    public:
    void set_data(int age,string name)
    {
        this->age=age;
        this->name=name;
        cout<<"\n";
    }
    void display_data()
    {
        cout<<"age = "<<this->age<<endl;
        cout<<"name = "<<this->name<<endl;
    }
    
};

int main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    test *ptr=new test[n];//Creating an array of pointers.
                         //Each pointer points to an object.
                        //Basically,we are creating an array which will store the adresses of objects.
    for(int i=0;i<n;i++)
    {
        int age;
        string name;
        cout<<"Enter age"<<endl;
        cin>>age;
        cout<<"Enter name"<<endl;
        cin>>name;
        (*(ptr+i)).set_data(age,name);
        
        //ptr[i].set_data(age,name);Alternate way

        // ptr->set_data(age,name);//Alternate way
        // ptr++;
    }
    for(int i=0;i<n;i++)
    {
        ptr->display_data();
        ptr++;
    }
    

}