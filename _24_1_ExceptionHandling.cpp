/*
Exceptions are run time anomalies or unusual conditions that a program may encounter during execution.
Examples:-
1)Division by 0
2)Accessing an array out of the bounds
3)Running out of memory
4)Running out of disk space

Exceptions are of 2 types:-
(i)Synchronous Exception:-
   Exceptions which are caused by problems within the scope of the program itself.
  ->over flow
  ->out of range index
  
(ii)Asynchronous Exceptions
   Exceptions which are caused by problems which are beyond the scope of the program.
   eg:-keyboard defect or malfunctioning

Exception Handling Mechanism:-
1.Find the problem(Hit the exception)
2.Inform that an error has occurred(Throw the exception)
3.Receive the error information(catch the exception)
4.Take corrective action(Handle the exception)

Exception Handling is based on 3 keywords
->try(block)
->throw
->catch(block)

the try block comes first,and the catch block comes imeediately after the try block
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the numerator"<<endl;
    cin>>a;
    cout<<"Enter the denominator"<<endl;
    cin>>b;

    //exception handling code starts
    try//we try to find and throw the exception using the the try block.
    {
        if(b==0)//Finding the problem.
        {
            // throw b;//throwing the exception.
            // throw 3.14;
            throw "exception has ocurred";//We can throw anything. We just need to make sure that 
                                         //the catch block has the datatype which has been thrown.

        }
        else
        {
                cout<<"a/b = "<<a/b<<endl;
        }
    }
    catch(const char * x)//We catch and handle the exception using the catch block.
                         //The parameter inside the catch block must be of the same type as the type thrown.
    {
        cout<<x<<endl;
    }
}