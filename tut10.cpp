#include<iostream>
using namespace std;

int main()
{
    // 1. For loop
    /*
    for(data_type variable_name; condition; updation)
    {
        loop body(c++ code)
    }
    */
    for (int i = 0; i < 10; i++){cout<<i<<endl;}
    
    // while loop
    /*
    while(condition)
    {
        loop body(c++ code)
    }
    */
   int i=0;
   while (i<10){
    cout<<i<<endl;
    i++;}
    
   
    // do while loop
    // always runs once even if condition is true initially, then check the condition
    /*
    do
    {   
        loop code(c++ code)     
    } while (condition);
    */
   int j=11;
    do
    {
        cout<<j;
        j++;
    } while (j<5);
    

    return 0;
    
}

// Loops
// There are three types of loops in c++:
// 1. for — useful when the number of iterations is known.
// 2. while — useful when repetition depends on a condition.
// 3. do-while — executes the body at least once.