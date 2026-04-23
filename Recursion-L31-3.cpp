// find alternate sum till number n
// eg--> n=5 => 1-2+3-4+5 == 3 ans

#include <iostream>
using namespace std;

int alternateSum(int n);

int main()
{
    int n=5;
    cout<<alternateSum(n);
}

int alternateSum(int n){
    // base case
    if (n==0 || n==1) return n;
    //self-work
    if (n & 1) return alternateSum(n-1) + n;
    else return alternateSum(n-1) - n;
}

//  Time-Complexity = O(n)
// Space-Complexity = O(n)