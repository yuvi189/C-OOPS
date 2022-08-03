#include<iostream>
#include<string.h>
using namespace std;
class Complex
{
    int real_part1;
    int imaginary_part1;
    int real_part2;
    int imaginary_part2;
    public:
    void set_values(int a,int b,int c,int d)
    {
        this -> real_part1=a;
        this -> imaginary_part1=b;
        this -> real_part2=c;
        this -> imaginary_part2 =d;
    }
    void display_sum()
    {
        int real_sum=( this -> real_part1) + (this -> real_part2); 
        int imaginary_sum=( this -> imaginary_part1 ) + (this -> imaginary_part2);
        cout<<"The sum of the two complex numbers is "<< real_sum << "+ i( "<< imaginary_sum << " )"<<endl;

    }
    void display_difference()
    {
        int real_diff=( this -> real_part1) - (this -> real_part2); 
        int imaginary_diff=( this -> imaginary_part1 ) - (this -> imaginary_part2);
        cout<<"The difference of the two complex numbers is "<< real_diff << "+ i( "<< imaginary_diff << " )"<<endl;

    }
    void display_multiplication()
    {
        int term_1= (this -> real_part1) * (this -> real_part2);
        int term_2=(this -> imaginary_part1) * (this -> imaginary_part2);
        int term_3=(( this -> real_part1)* (this -> imaginary_part2)) + ((this -> imaginary_part1)*(this -> real_part2));
        cout<<"The multiplication of the two complex numbers is "<< (term_1 - term_2)<<"+ i( "<<term_3<<" )"<<endl;
    }

};
int main()
{
    Complex obj1;
    int a1,b1,a2,b2;
    cout<<"enter the real part of first number";
    cin>>a1;
    cout<<"enter the imaginary values of first number";
    cin>>b1;
    cout<<"enter the real value of second number";
    cin>>a2;
    cout<<"enter the imaginary value of second number";
    cin>>b2;
    obj1.set_values(a1,b1,a2,b2);
    obj1.display_sum();
    obj1.display_difference();
    obj1.display_multiplication();
}