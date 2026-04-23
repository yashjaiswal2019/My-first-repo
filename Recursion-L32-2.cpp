// find the Greatest common divisor to two given numbers using recursion

#include <iostream>
using namespace std;

int gcd(int a , int b);

int main()
{
    int a=54 , b=72;
    cout<<gcd(a , b);
}

int gcd(int a , int b){
    if (b>a) swap(a , b);
    // base case 
    int divisor=b;
    if (a%divisor == 0) return divisor;
    //self-work and assumption
    
    return gcd(b , a%b);     // swaped a nad b because we wrote equation considering a>b
}