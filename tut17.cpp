#include<iostream>
using namespace std;

// inline int product(int a, int b){
//     return a*b;
// }

int product(int a, int b){
    static int c=0;
    c = c+1;
    return a*b+c;
}

float moneyRec(int curMoney, float factor=1.04){
    return curMoney * factor;
}

// int strlen(const char *p){

// }

int main()
{
    int a,b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money=100;
    cout<<"If you have "<<money<<"rs in your bank account, you will recive "<<moneyRec(money)<<"Rs after 1 year"<<endl;
    cout<<"For VIP, if you have "<<money<<"rs in your bank account, you will recive "<<moneyRec(money,1.10)<<"Rs after 1 year"<<endl;
    return 0;
}


// Inline function - suggests that the compiler expand the function
// at the call site; the compiler decides whether to do so.

// Default argument - used when an argument is not provided
// in the function call.

// Const argument - prevents modification through that parameter.
// Example: const char* p