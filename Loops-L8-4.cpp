//my method still wring.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;

    //finding total number of digits.
    int temp=n , digits=0;
    while(temp>0){
        digits++;
        temp/=10;
    }
    //reversing digits.
    int reversed=0;
    int digitsPlace=pow(10 , digits-1);

    while (digits>0){
        int temp2=(n%10)*digitsPlace;
        n/=10;
        reversed+=temp2;
        digits--;
    }
    cout<<reversed<<endl;
}