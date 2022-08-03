/*

By definition, an abstract class in C++ is a class that has at least one pure virtual function 
(i.e., a function that has no definition). The classes inheriting the abstract class must provide 
a definition for the pure virtual function; otherwise, the subclass 
would become an abstract class itself.

A pure virtual function is a virtual function that does not have any body inside the parent class.

*/
#include<iostream>
#include<string.h>
using namespace std;
class test
{
    public:
    int age;
    string name;
    virtual void fun()=0;//creation of a pure virtual function.
};

class child1 : public test
{
    public:
    void fun()//overriding the pure virtual function
    {
        cout<<"child1 called"<<endl;
    }
};
class child2 : public test
{
    public:
    void fun()//overrding the pure virtual function
    {
        cout<<"child2 function called"<<endl;
    }
};

int main()
{
    test *x1=new child1();//test is the type of reference variable and child1 is the object type.
                          //The object type determines what function will be called.
                          //Reference variable type determines what data members the object will be able to access.
    test *x2=new child2();
    child1 *x3=new child1();
    child2 *x4=new child2();
    x1->fun();
    x2->fun();
    x3->fun();
    x4->fun();
    

}

/*

Differences between virtual functions and pure virtual functions:-

                        𝗩𝗶𝗿𝘁𝘂𝗮𝗹 𝗙𝘂𝗻𝗰𝘁𝗶𝗼𝗻𝘀                                                      𝗣𝘂𝗿𝗲 𝗩𝗶𝗿𝘁𝘂𝗮𝗹 𝗙𝘂𝗻𝗰𝘁𝗶𝗼𝗻𝘀
        𝟭.𝗩𝗶𝗿𝘁𝘂𝗮𝗹 𝗳𝘂𝗻𝗰𝘁𝗶𝗼𝗻𝘀 𝗰𝗼𝗻𝘁𝗮𝗶𝗻 𝘁𝗵𝗲𝗶𝗿 𝗯𝗼𝗱𝘆 𝗶𝗻 𝘁𝗵𝗲 𝗯𝗮𝘀𝗲 𝗰𝗹𝗮𝘀𝘀              𝟭.𝗣𝘂𝗿𝗲 𝘃𝗶𝗿𝘁𝘂𝗮𝗹 𝗳𝘂𝗻𝗰𝘁𝗶𝗼𝗻𝘀 𝗼𝗻𝗹𝘆 𝗵𝗮𝘃𝗲 𝗮 𝗱𝗲𝗰𝗹𝗮𝗿𝗮𝘁𝗶𝗼𝗻 𝗶𝗻𝘀𝗶𝗱𝗲 𝘁𝗵𝗲 𝗯𝗮𝘀𝗲 𝗰𝗹𝗮𝘀𝘀
                                                                          𝗮𝗻𝗱 𝘁𝗵𝗲𝗶𝗿 𝗯𝗼𝗱𝘆 𝗶𝘀 𝗿𝗲𝗱𝗲𝗳𝗶𝗻𝗲𝗱 𝗳𝗼𝗿 𝗲𝘃𝗲𝗿𝘆 𝘀𝘂𝗯-𝗰𝗹𝗮𝘀𝘀.
      
        𝟮.𝘃𝗶𝗿𝘁𝘂𝗮𝗹 𝗳𝘂𝗻𝗰𝘁𝗶𝗼𝗻𝘀 𝗻𝗲𝗲𝗱 𝗻𝗼𝘁 𝗯𝗲 𝗼𝘃𝗲𝗿𝗿𝗶𝗱𝗱𝗲𝗻/𝗿𝗲𝗱𝗲𝗳𝗶𝗻𝗲𝗱                𝟮.𝗣𝘂𝗿𝗲 𝘃𝗶𝗿𝘁𝘂𝗮𝗹 𝗳𝘂𝗻𝗰𝘁𝗶𝗼𝗻𝘀 𝗺𝘂𝘀𝘁 𝗯𝗲 𝗼𝘃𝗲𝗿𝗿𝗶𝗱𝗱𝗲𝗻 𝗶𝗻 𝗲𝘃𝗲𝗿𝘆 𝘀𝘂𝗯-𝗰𝗹𝗮𝘀𝘀 𝗲𝗹𝘀𝗲
          𝗶𝗻 𝗲𝘃𝗲𝗿𝘆 𝘀𝘂𝗯-𝗰𝗹𝗮𝘀𝘀.                                                𝘁𝗵𝗲𝘀𝗲 𝘀𝘂𝗯-𝗰𝗹𝗮𝘀𝘀𝗲𝘀 𝘄𝗶𝗹𝗹 𝗮𝗹𝘀𝗼 𝗯𝗲𝗰𝗼𝗺𝗲 𝗮𝗯𝘀𝘁𝗿𝗮𝗰𝘁.

        𝟯.𝗦𝘆𝗻𝘁𝗮𝘅 :-                                                      𝟯.𝗦𝘆𝗻𝘁𝗮𝘅 :-
          𝘃𝗶𝗿𝘁𝘂𝗮𝗹 𝗿𝗲𝘁𝘂𝗿𝗻_𝘁𝘆𝗽𝗲 𝗳𝘂𝗻𝗰𝘁𝗶𝗼𝗻_𝗻𝗮𝗺𝗲()                                𝘃𝗶𝗿𝘁𝘂𝗮𝗹 𝗿𝗲𝘁𝘂𝗿𝗻_𝘁𝘆𝗽𝗲 𝗳𝘂𝗻𝗰𝘁𝗶𝗼𝗻_𝗻𝗮𝗺𝗲()=𝟬;
          {
              𝗯𝗼𝗱𝘆
          }

        𝟰.𝗔 𝗰𝗹𝗮𝘀𝘀 𝘄𝗶𝘁𝗵 𝗮 𝘃𝗶𝗿𝘁𝘂𝗮𝗹 𝗳𝘂𝗻𝗰𝘁𝗶𝗼𝗻 𝗰𝗮𝗻 𝗯𝗲 𝘂𝘀𝗲𝗱 𝘁𝗼 𝗺𝗮𝗸𝗲               𝟰.𝗔 𝗰𝗹𝗮𝘀𝘀 𝘄𝗶𝘁𝗵 𝗮 𝗣𝘂𝗿𝗲 𝗩𝗶𝗿𝘁𝘂𝗮𝗹 𝗙𝘂𝗻𝗰𝘁𝗶𝗼𝗻 𝗰𝗮𝗻𝗻𝗼𝘁 𝗯𝗲 𝘂𝘀𝗲𝗱 
          𝗼𝗯𝗷𝗲𝗰𝘁𝘀.                                                            𝘁𝗼 𝗰𝗿𝗲𝗮𝘁𝗲 𝗼𝗯𝗷𝗲𝗰𝘁𝘀.
        
        𝟱.𝗔 𝗰𝗹𝗮𝘀𝘀 𝘄𝗶𝘁𝗵 𝗮 𝗩𝗶𝗿𝘁𝘂𝗮𝗹 𝗙𝘂𝗻𝗰𝘁𝗶𝗼𝗻 𝗶𝘀 𝗻𝗼𝘁 𝗮𝗻 𝗮𝗯𝘀𝘁𝗿𝗮𝗰𝘁                  𝟱.𝗔 𝗰𝗹𝗮𝘀𝘀 𝘄𝗶𝘁𝗵 𝗮 𝗽𝘂𝗿𝗲 𝘃𝗶𝗿𝘁𝘂𝗮𝗹 𝗳𝘂𝗻𝗰𝘁𝗶𝗼𝗻 𝗶𝘀 𝗰𝗮𝗹𝗹𝗲𝗱 𝗮𝗻 𝗮𝗯𝘀𝘁𝗿𝗮𝗰𝘁 𝗰𝗹𝗮𝘀𝘀.
          𝗰𝗹𝗮𝘀𝘀.


*/
