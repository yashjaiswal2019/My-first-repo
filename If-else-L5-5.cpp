#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;

    if (num%2==0){
        if (num%3==0){
            cout<<"number is even and is divisible by 3."<<endl;
        }
        else {
            cout<<"number is even but not divisible by 3 "<<endl;
        }
    }
    else {
        cout<<"number is odd"<<endl;
    }
}
