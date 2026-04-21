// given an integer find the sum of its digits using recursion

// eg-> n=1234 ==> ans = 1+2+3+4==10

#include <iostream>
using namespace std;

int sumdigits(int n);

int main()
{
    int n;
    cin>>n;

    cout<<sumdigits(n)<<endl;
}

int sumdigits(int n){
    // Base case.
    if (0<=n && n<=9) return n;

    int sum=0;
    sum+=n%10 + sumdigits(n/10);
    return sum;
}