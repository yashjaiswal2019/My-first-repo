//binary to decimal number converter

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the binary number : ";
    cin>>n;

    int decimal=0;
    int power=1;

    while (n>0){
        int lastDigit=n%10;
        decimal+=lastDigit*power;
        power*=2;
        n/=10;
    }
    cout<<decimal<<endl;
}