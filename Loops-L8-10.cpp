//Write a program to print all Armstrong numbers between 100 to 500.
//my first try couldn't do it.
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

    int checkingSum=0;
    int lastDigit;

    for (int i=1 ; i<=n ; i++){         //this loop goes through every number till n.
        for (int k=1 ; k<=noDigits ; k++){
            lastDigit=n%10;
        for (int j=1 ; j<=noDigits ; j++){        //raising last digit number to number of digits
            int raise=1;
            raise*=lastDigit;
        }
        //checkingSum+=raise
        }
    }
}