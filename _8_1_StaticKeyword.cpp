/* 

𝟭.𝗦𝘁𝗮𝘁𝗶𝗰 𝘃𝗮𝗿𝗶𝗮𝗯𝗹𝗲𝘀 𝗶𝗻 𝗮 𝗙𝘂𝗻𝗰𝘁𝗶𝗼𝗻:
When a variable is declared as static, space for it gets allocated for 
the lifetime of the program. Even if the function is called multiple 
times, space for the static variable is allocated only once and the 
value of variable in the previous call gets carried through the next 
function call.

𝟮.𝗦𝘁𝗮𝘁𝗶𝗰 𝘃𝗮𝗿𝗶𝗮𝗯𝗹𝗲𝘀 𝗶𝗻 𝗮 𝗰𝗹𝗮𝘀𝘀:
As the variables declared as static are 
initialized only once as they are allocated space in separate static 
storage so, the static variables in a class are shared by the objects. 
There can not be multiple copies of same static variables for different
objects. Also because of this reason static variables can not be 
initialized using constructors.

𝟯.𝗖𝗹𝗮𝘀𝘀 𝗼𝗯𝗷𝗲𝗰𝘁𝘀 𝗮𝘀 𝘀𝘁𝗮𝘁𝗶𝗰: 
Just like variables, objects also when declared as static have 
a scope till the lifetime of program. Consider the below program 
where the object is non-static.

𝟰.𝗦𝘁𝗮𝘁𝗶𝗰 𝗳𝘂𝗻𝗰𝘁𝗶𝗼𝗻𝘀 𝗶𝗻 𝗮 𝗰𝗹𝗮𝘀𝘀:
Just like the static data members or static variables inside the class, 
static member functions also does not depend on object of class. We are 
allowed to invoke a static member function using the object and the ‘.’ 
operator but it is recommended to invoke the static members using the 
class name and the scope resolution operator.Static member functions are 
allowed to access only the static data members or other static member functions, 
they can not access the non-static data members or member functions of the class.



*/



// C++ program to demonstrate static
// variables inside a class
  
#include<iostream>
using namespace std;
  
class GfG
{
   public:
   static int i;//declaration of static variable
      
    GfG()
    {
      i++;
    };
};

int GfG::i;
  
int main()
{
  GfG obj1;
  cout<<obj1.i<<endl;
  GfG obj2;
  cout<<obj2.i<<endl;
  GfG obj3;
  cout<<obj3.i<<endl;
  GfG obj4;
  cout<<obj4.i<<endl;
  GfG obj5;
  cout<<obj5.i<<endl;

}