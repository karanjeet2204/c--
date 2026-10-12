#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    
    // 1. Selection control structure: if-else if-else ladder
    // if((age<18)&&(age>0)){
    //     cout<<"You cannot come to my party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    // }
    // else if(age<1){
    //     cout<<"You are not yet born.";
    // }
    // else{
    //     cout<<"Woah nigga, you can come to the party"<<endl;  
    // }

    // 2. Selection control structure: switch case statement
    switch (age)
    {
    case 18:
        cout<<"You are 18."<<endl;
        break;
    case 22:
        cout<<"You are 22."<<endl;
        break;
    case 2:
        cout<<"You are 2."<<endl;
        break;
    default:
        cout<<"No special cases."<<endl;
        break;
    }

    return 0;
}

// Basic control structure
// 1. Sequence structure
// 2. Selection structure
// 3. Loop structure

// 1. Sequence structure
// entry --> action 1 --> action 2 --> ... --> exit

// 2. Selection structure
// entry --> condition --> true/false --> action 1
//                          |               |
//                          V               V
//                         action 2 -->    exit

// 3. Loop structure
// entry --> condition --> true/false --> action 1
//               ^          |                |
//               |          V                V
//               ----- action 2             exit

// 1. if-else statement
// if-else ladder
// 2. switch case