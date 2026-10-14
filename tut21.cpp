#include<iostream>
using namespace std;

class Employee{
    private:
        int a, b, c;
    public:
        int d, e;
    void setData(int a, int b, int c); // Declaration
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee karan;
    // karan.a = 134; --> This will give error as 'a' is a private variable of class Employee
    karan.d = 34;
    karan.e = 89;
    karan.setData(1, 2, 3);
    karan.getData();
    return 0;
}

// Class - blueprint for creating objects.
// Object - instance of a class.

// Private - accessible directly only within the class
// and its friends.
// Public - accessible from outside the class through an object.

// By default, class members are private.