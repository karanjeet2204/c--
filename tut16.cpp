#include<iostream>
using namespace std;

int sum(int a, int b){
    int c=a+b;
    return c;
}

// formal parameters-(a and b) will changed, not (x and y)-actual parameters
void swap(int a, int b){  // temp    a     b
    int temp = a;         //  4      4     5
    a = b;                //  4      5     5
    b = temp;             //  4      5     4
}

// Call by reference using pointers
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference using c++ reference variables
void swapRefvar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int& swapRefvar2(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main()
{
    int x = 4, y = 5;
    // cout<<"The sum of 4 and 5 is "<<sum(4,5)<<endl;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x, y);
    // cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swapPointer(&x, &y);
    // cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swapRefvar(x, y);
    // cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    
    swapRefvar2(x, y) = 765;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}
// Call by value: changes local copies.
// Call by reference: changes the original variables.
// Returning int& allows the caller to modify the referred variable.