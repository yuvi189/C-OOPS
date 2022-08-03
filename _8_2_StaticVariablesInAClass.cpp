// C++ program to demonstrate static
// variables inside a class
  
// #include<iostream>
// using namespace std;
  
// class GfG
// {
//    public:
//      static int i;
      
//      GfG()
//      {
//         // Do nothing
//      };
// };
  
// int main()
// {
//   GfG obj1;
//   GfG obj2;
//   obj1.i =2;
//   obj2.i = 3;
    
//   // prints value of i
//   cout << obj1.i<<" "<<obj2.i;   
// }

// You can see in the above program that we have tried to create 
// multiple copies of the static variable i for multiple objects. 
// But this didn’t happen. So, a static variable inside a class 
// should be initialized explicitly by the user using the class
// name and scope resolution operator outside the class as shown 
// below

// C++ program to demonstrate static
// variables inside a class
  
#include<iostream>
using namespace std;
  
class GfG
{
    float age;
    string name;
    public:
    static int population;
    GfG(int age)
    {
        this->age = age;
        population++;
    };
    static void fun()
    {
        cout<<"static function called"<<endl;
    }
};

// int GfG::population;//explicit initialisation of the static variable outside the class 

int main()
{
    GfG::fun();
    GfG obj1(10);
    cout<<GfG::population<<endl;
    GfG obj2(20);
    cout<<GfG::population<<endl;
}

/*
  Summary
 =>Static variables and fucntions are object Independent.
 =>The value of a static data member is same for all objects.
 =>Static functions can be called without the creation of an object.
 =>Static data members are called using the class name instead of the object itself.
 
*/
