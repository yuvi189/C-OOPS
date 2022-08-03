#include<iostream>
using namespace std;
class Area
{
    int length;
    int breadth;
    int area;
    public:
    void set_Dim(int length,int breadth)
    {
        this -> length = length;
        this -> breadth = breadth;

    }
    int get_Area()
    {
        return ((this -> length)* (this -> breadth));
    }

};
int main()
{
    Area obj1;
    int l,b;
    cout<<"Enter the length of the rectanngle"<<endl;
    cin>>l;
    cout<<"Enter the breadth of the rectangle"<<endl;
    cin>>b;
    obj1.set_Dim(l,b);
    int p=obj1.get_Area();
    cout<<"The area of the given rectangle is "<<p<<endl;


}