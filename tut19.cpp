#include<iostream>
using namespace std;

int add(int a, int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}

int add(int a, int b, int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}

double volume(double r, double h){
    return (3.14*r*r*h);
}
double volume(int a){
    return a*a*a;
}
double volume(int l, int b, int h){
    return l*b*h;
}

int main()
{
    cout<<"The sum of 3 and 6 is "<<add(3, 6)<<endl;
    cout<<"The sum of 3, 6 and 9 is "<<add(3, 6, 9)<<endl;
    cout<<"The volume of cuboid of 3,7,8 is "<<volume(3,7,8)<<endl;
    cout<<"The volume of cylinder of 3,7 is "<<volume(3,7)<<endl;
    cout<<"The volume of cube of 3 is "<<volume(3)<<endl;
    return 0;
}

// Function overloading - multiple functions share the same name
// but have different parameter lists.
// Return type alone cannot be used to overload a function.