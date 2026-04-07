#include <iostream>
using namespace std;

int decimal(int num){
    int sum=0;
    int power=1;
    
    while (num>0){
        int lastDigit=num%10;
        sum+=lastDigit*power;
        power*=2;
        num/=10;
    }
    return sum;
}

int main()
{
    int a , b;
    cin>>a>>b;

    decimal(a) > decimal(b) ? cout<<decimal(a) : cout<<decimal(b);  

}