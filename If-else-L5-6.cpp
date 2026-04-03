//print value if divisible by either 3 or 5.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;

    if ((num%3==0) && (num%5==0)) {
        cout<<"number is divisible by both 3 & 5 ."<<endl;
    }
    else {
        if (num%3==0){
            cout<<"number is divisible by 3 only,";
        }
        else {
            cout<<"number is divisible by 5 only";
        }
    }
}