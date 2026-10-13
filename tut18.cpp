#include<iostream>
using namespace std;

int factorial(int n){
    switch (n)
    {
    case 0:
    case 1:
        return 1;
    
    default:
        break;
    }
    return n * factorial(n-1);
}

int fib(int x){
    switch (x)
    {
    case 0:
    case 1:
        return 1;
    }
    return fib(x-2)+fib(x-1);
}

int main()
{
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    // cout<<"The factorial of "<<num<<" is "<<factorial(num)<<endl;
    cout<<"The term at "<<num<<" position is "<<fib(num);
    return 0;
}
// Recursion - a function calling itself.
// Base case - stops the recursive calls.
// Recursive case - reduces the problem toward the base case.