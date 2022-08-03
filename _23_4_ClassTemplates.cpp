#include<iostream>
using namespace std;
template <class x,class y>
class a
{
    x t1;
    y t2;
    public:
    a(x t1,y t2)
    {
        this->t1=t1;
        this->t2=t2;
    }
    void show()
    {
        cout<<"t1 = "<<this->t1<<endl;
        cout<<"t2 = "<<this->t2<<endl;
    }

};
int main()
{
    a <char*,int>obj1("hello",20);
    a <int,char>obj2(12,'a');
    obj1.show();
    obj2.show();
}