/* A constructor is different from normal functions in following ways: 

1. Constructor has same name as the class itself
2. Constructors don’t have return type
3. A constructor is automatically called when an object is created.
4. It must be placed in public section of class.
5. If we do not specify a constructor, C++ compiler generates a default constructor for object (expects no parameters and has an empty body)

*/

#include <iostream>
using namespace std;
 
class Yuvraj
{
    int age;
public:
    // constructor
    Yuvraj()
    {
        cout<<"Constructor called"<<endl;
    }
    // destructor
    ~Yuvraj()
    {
        cout<<"Destructor called"<<endl;
    }
};
 
int main()
{

    Yuvraj *z1=new Yuvraj;   // Constructor Called
    Yuvraj x1,x3,x4;

    int a = 1;


    if(a==1)
    {
        Yuvraj z2;  // Constructor Called
    }  // Destructor Called for z2

    
    delete z1;//destrcutor called manually
} //for z1,we have to manually call the destructor as it is Dynamically Allocated





/*                        Constructor                                                               Destructor
    1. constructor is called when an object of a class is created             1. destructor is called when an object of a class is deleted 
    2. constructor can have parameters                                        2. destructor cannot have parameters
    3. cosntrcutor can be overloaded                                          3. destructor cannot be overloaded 
    4. constructor is used to Allocate memory to an object of a class         4. destructor is used to De-Allocate memory of an object of a class
    5. A class can have multiple constructors                                 5. There can only be one destructor in a class 
                                                                              6. Destructor is called automatically for statically defined objects
                                                                                 but we have to call it manually for Dynamically Allocated objects.
*/