// check if given number is armstrong or not using recursion

#include <cmath>
#include <iostream>
using namespace std;

int arm(int n , int *digits);

int main()
{
    int n=153;
    int d=0;
    int *digits=&d;

    if (arm(n , digits) == n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int arm(int n , int *digits){
    if (n/10>0) (*digits)++;
    // base case 
    if (n<10) return pow(n , *digits);
    // assumption
    return arm(n/10 , digits) + pow(n%10 , *digits) ;
}

// this is wrong my solution