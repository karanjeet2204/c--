#include<iostream>
using namespace std;

typedef struct employee
{
    int empId;
    char favChar;
    float salary;
} srep;

union money
{
    int rice;
    char car;
    float pounds;
};


int main()
{
    // struct employee rohan;
    // struct employee shubham;
    // srep harry;
    // harry.empId = 1;
    // harry.favChar = 'k';
    // harry.salary = 999999999;
    // cout<<harry.salary<<endl;
    // cout<<harry.favChar<<endl;
    // cout<<harry.empId<<endl;

    // union money m1;
    // m1.rice=34;
    // m1.car='d';
    // cout<<m1.car;

    enum Meal{breakfast, lunch, dinner};
    Meal m1 = breakfast;
    cout<<(m1 == 0);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
    return 0;
}

// User defined data-types
// struct - a way to group several related variables into one place.
// use typedef to use the struct shortcut name we assigned - in this case srep

// union - members share the same memory location.
// enum - defines named integral constants.