//Write a program to print all Armstrong numbers between 100 to 500.
//My 2nd try. also couldn't do it .

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    //counting number of digits
    int temp1=n;
    int noDigits=0;
    while (temp1>0){
        noDigits++;         //gives number of digits.
        temp1/=10;
    }

    //checking if number is Armstrong number or not.
    int lastDigit=0;
    
    for (int i=1 ; i<=n ; i++){
        while (i>0){
            lastDigit+=n%10;
        

        }
    }

}