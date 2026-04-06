#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int binary=0;
    int power =1;

    while (n>0){
        int parityDigit=n%2;
        binary+=parityDigit*power;
        power*=10;
        n/=2;
    }
    cout<<binary;
}