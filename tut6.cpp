#include <iostream>
// There are two type of header files
// 1. System header files: It comes with the compiler
// 2. User defined Header files: It is written by the user.
// #include "this.h" --> Used to import user header files.
using namespace std;

int main(int argc, char const *argv[])
{
    int a=4,b=5;
    cout<<"Operators in c++"<<endl;
    cout<<"Types of operators"<<endl;
    // Arithmetic operators
    cout<<"the value of a+b: "<<a+b<<endl;
    cout<<"the value of a-b: "<<a-b<<endl;
    cout<<"the value of a*b: "<<a*b<<endl;
    cout<<"the value of a/b: "<<a/b<<endl;
    cout<<"the value of a%b: "<<a%b<<endl;
    cout<<"the value of a++: "<<a++<<endl;
    cout<<"the value of a--: "<<a--<<endl;
    cout<<"the value of ++a: "<<++a<<endl;
    cout<<"the value of --a: "<<--a<<endl<<endl;

    // Assignement operators
    // int a=3,b=9;
    // char d='d';

    // Comparison operators
    cout<<"The value of a==b is: "<<(a==b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;
    cout<<"The value of a>=b is: "<<(a>=b)<<endl;
    cout<<"The value of a<=b is: "<<(a<=b)<<endl;
    cout<<"The value of a>b is: "<<(a>b)<<endl;
    cout<<"The value of a<b is: "<<(a<b)<<endl<<endl;

    // Logical operators
    cout<<"The value of ((a==b) && (a<b)) is: "<<((a==b)&&(a<b))<<endl;
    cout<<"The value of ((a==b) || (a<b)) is: "<<((a==b)||(a<b))<<endl;
    cout<<"The value of (!(a==b)) is: "<<(!(a==b))<<endl;
    return 0;
}
