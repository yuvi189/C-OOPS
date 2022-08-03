#include<iostream>
#include<string.h>
using namespace std;
template <class x , char u>
class a
{
    x t1,t2;
    public:
    a(x t1,x t2)
    {
        this->t1=t1;
        this->t2=t2;
    }
    void show();

};

template<class x,char u>
void a <x, u> ::show()
    {
        cout<<"t1 = "<<this->t1<<endl;
        cout<<"t2 = "<<this->t2<<endl;
        cout<<"quote is "<<u<<endl;
    }
int main()
{
    a <char,'s'>obj1('A','B');
    a <int,'u'>obj2(12,49);
    obj1.show();
    obj2.show();
}