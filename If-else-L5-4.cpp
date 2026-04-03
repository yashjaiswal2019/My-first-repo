//to print a value if it is even and dividible by 3.
//using if-else.
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;

    if (num%2==1)
    {
        cout<<"number is odd."<<endl;    
    }
    else {
        if (num%3==0){
            cout<<"number is both even and divisible by 3."<<endl;            
        }
        else {
            cout<<"number is even but not divisible by 3."<<endl;
        }
    }
}