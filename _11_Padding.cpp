 /* 
 
 The general procedure for padding has the follwing steps:-
  1. First we identify the datatype with the largest size 
  2. we start filling blocks of whatever is the largest sized dataType
     eg(4 for int or float
        8 for double etc )

  3. short cannot be placed on an even slot 
 */


#include<iostream>
using namespace std;
class test_123
{
    public:
    long a9;
    short a10;
    char o;
    int g;
};
int main()
{
    test_123 obj1;
    cout<<sizeof(obj1.a9)<<endl;
    cout<<(sizeof(obj1));
}