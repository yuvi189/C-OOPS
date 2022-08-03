/*
𝟭.𝗢𝗽𝗲𝗿𝗮𝘁𝗼𝗿 𝗢𝘃𝗲𝗿𝗹𝗼𝗮𝗱𝗶𝗻𝗴 𝗶𝘀 𝘁𝗵𝗲 𝗽𝗿𝗼𝗰𝗲𝘀𝘀 𝗼𝗳 𝗴𝗶𝘃𝗶𝗻𝗴 𝗮𝗱𝗱𝗶𝘁𝗶𝗼𝗻𝗮𝗹 𝗺𝗲𝗮𝗻𝗶𝗻𝗴 𝘁𝗼 𝗮𝗻 𝗮𝗹𝗿𝗲𝗮𝗱𝘆 𝗲𝘅𝗶𝘀𝘁𝗶𝗻𝗴 𝗼𝗽𝗲𝗿𝗮𝘁𝗼𝗿.
𝗧𝗵𝗲 𝗼𝗿𝗶𝗴𝗶𝗻𝗮𝗹 𝗺𝗲𝗮𝗻𝗶𝗻𝗴 𝗼𝗳 𝘁𝗵𝗲 𝗼𝗽𝗲𝗿𝗮𝘁𝗼𝗿 𝘄𝗶𝗹𝗹 𝗿𝗲𝗺𝗮𝗶𝗻 𝗮𝘀 𝗶𝘁 𝗶𝘀 𝗯𝘂𝘁 𝘄𝗲'𝗹𝗹 𝗯𝗲 𝗮𝗯𝗹𝗲 𝘁𝗼 
𝗽𝗲𝗿𝗳𝗼𝗿𝗺 𝘀𝗼𝗺𝗲 𝗮𝗱𝗱𝗶𝘁𝗶𝗼𝗻𝗮𝗹 𝗳𝘂𝗻𝗰𝘁𝗶𝗼𝗻𝘀 𝘂𝘀𝗶𝗻𝗴 𝘁𝗵𝗲 𝘀𝗮𝗺𝗲 𝗼𝗽𝗲𝗿𝗮𝘁𝗼𝗿 𝗯𝘆 𝗼𝘃𝗲𝗿𝗹𝗼𝗮𝗱𝗶𝗻𝗴 𝗶𝘁.

𝟮.𝗪𝗲 𝗰𝗮𝗻 𝗽𝗲𝗿𝗳𝗼𝗿𝗺 𝗼𝗽𝗲𝗿𝗮𝘁𝗼𝗿 𝗼𝘃𝗲𝗿𝗹𝗼𝗮𝗱𝗶𝗻𝗴 𝗯𝘆 𝗰𝗿𝗲𝗮𝘁𝗶𝗻𝗴 𝗮 𝗺𝗲𝗺𝗯𝗲𝗿 𝗼𝗿 𝗻𝗼𝗻-𝗺𝗲𝗺𝗯𝗲𝗿(𝗳𝗿𝗶𝗲𝗻𝗱) 𝗳𝘂𝗻𝗰𝘁𝗶𝗼𝗻.

Syntax:-
return_type operator operator_symbol(parameters)
{

}

eg:-
If we want to overload the ++operator uisng a member function then we can do so as follows:-

return_type operator++(parameters)
{

}

AND

If we want to overload the ++operator using a function which is only declared inside the class but defined outside the class,
it can be done as follows:-

return_type class_name::operator++(parameters)
{

}

𝟯.𝗧𝗵𝗲𝗿𝗲 𝗮𝗿𝗲 𝘀𝗼𝗺𝗲 𝗼𝗽𝗲𝗿𝗮𝘁𝗼𝗿𝘀 𝘄𝗵𝗶𝗰𝗵 𝗰𝗮𝗻𝗻𝗼𝘁 𝗯𝗲 𝗼𝘃𝗲𝗿𝗹𝗼𝗮𝗱𝗲𝗱:-
  (𝗶)𝗧𝗲𝗿𝗻𝗮𝗿𝘆 𝗢𝗽𝗲𝗿𝗮𝘁𝗼𝗿(?:)
  (𝗶𝗶)𝗗𝗼𝘁 𝗢𝗽𝗲𝗿𝗮𝘁𝗼𝗿(.)
  (𝗶𝗶𝗶)𝗗𝗼𝘁 𝗦𝘁𝗮𝗿 𝗼𝗽𝗲𝗿𝗮𝘁𝗼𝗿(.*)
  (𝗶𝘃)𝗦𝗰𝗼𝗽𝗲 𝗥𝗲𝘀𝗼𝗹𝘂𝘁𝗶𝗼𝗻 𝗢𝗽𝗲𝗿𝗮𝘁𝗼𝗿(::)
  (𝘃)𝗦𝗶𝘇𝗲𝗢𝗳 𝗢𝗽𝗲𝗿𝗮𝘁𝗼𝗿(𝘀𝗶𝘇𝗲𝗼𝗳())

𝟰.𝗧𝗵𝗲𝗿𝗲 𝗮𝗿𝗲 𝘀𝗼𝗺𝗲 𝘀𝗽𝗲𝗰𝗶𝗮𝗹 𝗼𝗽𝗲𝗿𝗮𝘁𝗼𝗿𝘀 𝘄𝗵𝗶𝗰𝗵 𝗰𝗮𝗻𝗻𝗼𝘁 𝗯𝗲 𝗼𝘃𝗲𝗿𝗹𝗼𝗮𝗱𝗲𝗱 𝘂𝘀𝗶𝗻𝗴 𝗳𝗿𝗶𝗲𝗻𝗱 𝗳𝘂𝗻𝗰𝘁𝗶𝗼𝗻𝘀:-
  =,(),[],->




*/
#include<iostream>
using namespace std;
class test
{
    int a,b,c;
    public:
    void setData(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void getData()
    {
        cout<<"a is"<<this->a<<endl;
        cout<<"b is"<<this->b<<endl;
        cout<<"c is"<<this->c<<endl;
    }
    void operator-()//unary minus Operator Overloading
    {
        this->a=-(this->a);
        this->b=-(this->b);
        this->c=-(this->c);
    }
    void operator!()//Overloading logical not Operator.
                    //Normally logical not returns 0 for every non-zero value and returns 1 for zero.
    {
        this->a=!(this->a);
        this->b=!(this->b);
        this->c=!(this->c);
    }
    test operator--()//pre decrement operator overloading
    {
        test obj;
        obj.a=(--(this->a));
        obj.b=(--(this->b));
        obj.c=(--(this->c));
        return obj;
    }
    test operator++()//pre increment operator overloading
    {
        test obj;
        obj.a=(++(this->a));
        obj.b=(++(this->b));
        obj.c=(++(this->c));
        return obj;
    }
    test operator--(int)//post decrement operator overloading
    {
        test obj;
        obj.a=((this->a)--);
        obj.b=((this->b)--);
        obj.c=((this->c)--);
        return obj;
    }
    test operator++(int)//post increment operator overloading
    {
        test obj;
        this->a=((this->a)++);
        this->b=((this->b)++);
        this->c=((this->c)++);
        return obj;
    }
};
int main()
{
    test t1;
    t1.setData(10,-32,-99);
    cout<<"original t1"<<endl;
    t1.getData();
    -t1;
    cout<<"negative of t1"<<endl;
    t1.getData();
    test t2;
    t2=++t1;//overloaded pre-increment
    cout<<"t1 values after pre-increment"<<endl;
    t1.getData();
    cout<<"t2 values"<<endl;
    t2.getData();
    test t3;
    t3=t1--;//overloaded post decrement
    cout<<"t3 values"<<endl;
    t3.getData();
    cout<<"t1 valules post decrement"<<endl;
    t1.getData();

}