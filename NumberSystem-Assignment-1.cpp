#include <iostream>
using namespace std;

int binary(int num){        //converts decimal to binary.
    int binary=0;
    int power=1;
    
    while (num>0){
        int lastDigit=num%2;
        binary+=lastDigit*power;
        power*=10;
        num/=2;
    }
    return binary;
}

int main()
{
    int n;
    cin>>n;
    
    int sum=0;

    for (int i=1 ; i<=n ; i++ ){
        sum+=i;
    }
    cout<<binary(sum)<<endl;
}