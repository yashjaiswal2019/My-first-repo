// write a program to check whether given number is a palidrome or not.

#include <iostream>
using namespace std;

bool palindrome(int num , int *temp);

int main()
{
    int num=1441;
    int temp=num;
    int *tempPtr = &temp;

    cout<<palindrome(num , tempPtr);
}

bool palindrome(int num , int *temp){
    // base case 
    if (num < 10) {
        int lastdigitoftemp=(*temp)%10;
        *temp/=10;
        return (num == lastdigitoftemp);
    }
    // self-wrok
    bool result = (palindrome (num/10 , temp)) and (num%10 == (*temp)%10);
    *temp/=10;

    return result;    
}