//i am using cmath library because i am confused how to apply exponent using loop
//I got this ques wrong i will use solution 
//logic was close.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num1;
    cin>>num1;

    int digits=0;
    int countDigits=num1;

    for ( ; countDigits>0 ; countDigits/=10){     //finding number of digits
        digits++;
    }

    int digitplace=pow(10 , digits-1);
    int reversed=0 , num2=0;            //reversed is our answer and num2 if for storing value temporarily.
    
    for ( ; digits>0 ; digits--){
        num2=(num1%10)*digitplace;      //last number becomes first number for every pair of digits at end.
        reversed+=num2;
    }
    cout<<reversed<<endl;
}