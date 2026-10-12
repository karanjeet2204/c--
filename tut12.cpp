#include<iostream>
using namespace std;

int main()
{
    int a = 3;
    int* b=&a;
    // & ----> address of operator
    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The address of a is: "<<b<<endl;
    
    // * ----> (value at)/Dereference operator
    cout<<"The value at address b is: "<<*b<<endl;

    // Pointer to pointer
    int** c=&b;
    cout<<"the address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
    
    return 0;
}
// Pointer - a variable that stores a memory address.
// & - address-of operator
// * - dereference operator (accesses the value at an address)
// ** - used here to dereference a pointer to a pointer