#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout<<i<<endl;
        if (i==2){
            break;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (i==2){
            continue;
        }
        cout<<i<<endl;
    }
    
    return 0;
}
// break - terminates the loop immediately.
// continue - used to skip the remaining iteration and go to the next iteration of the loop