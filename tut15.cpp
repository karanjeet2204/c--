#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}
int sub(int a, int b); // Function prototype - declares a function before its definition.
// Parameter names can differ between the prototype and definition.
// Example: int sub(int a, int b); or int sub(int, int);

void g();

int main()
{
    int num1, num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"The result of num1 + num2 is: "<<sum(num1, num2)<<endl;
    cout<<"The result of num1 - num2 is: "<<sub(num1, num2)<<endl;
    g();
    return 0;
}

int sub(int num1, int num2){
    int c = num1 - num2;
    return c;
}

void g(){
    cout<<"Hello, Good Morning"<<endl;
}

// Functions
// type function-name(arguments)
// {
//     function body
// }