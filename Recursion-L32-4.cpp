// check if given number is armstrong or not using recursion
// sir's solution

#include <cmath>
#include <iostream>
using namespace std;

int countDigits (int n);

int armstrong(int n , int digits);

int main()
{
    int n=153;
    if (armstrong(n , countDigits(n)) == n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int countDigits (int n){
    // base case
    if (n>0 and n<10) return 1;
    // assumption
    return 1+countDigits(n/10);
}

int armstrong(int n , int digits){
    // base case
    if (n==0) return 0;
    // assumption
    return pow (n%10 , digits) + armstrong (n/10 , digits);
}