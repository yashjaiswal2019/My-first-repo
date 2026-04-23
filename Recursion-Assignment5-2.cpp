// Q2 - Given a number n, check whether it's a prime number or not using recursion.

// Input1 : n = 11
// Output1 : Yes
// Input2 : n = 15
// Output2 : No

// as we know the if we didn't find that if a number till checking for root of that number then 
// there wont be a number that divides it after that hence it will be prime 

#include <iostream>
using namespace std;

bool isPrime(int x , int n);

int main()
{
    int x;
    cin>>x;
    if(isPrime(x , 2)) cout << "PRIME" << endl;
    else cout << "NOT PRIME" << endl;
}

bool isPrime(int x , int n){
    if (x == 1 || x == 2) return true;
    // base cases 
    if (n*n > x) return true;
    // self-work
    if (x%n == 0) return false;
    else return isPrime(x , n+1);
}