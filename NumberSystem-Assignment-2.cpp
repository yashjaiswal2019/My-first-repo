#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int zeroes=0;

    while (n>0){
        if (n%2==0) zeroes++;
        n/=2;
    } 
    cout<<zeroes<<endl;
}