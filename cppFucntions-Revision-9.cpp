//Given two numbers a and b, write a program to print all the prime numbers present between a and b.

#include <iostream>
using namespace std;

bool isprime(int n){
    if (n<=1) return false;
    if (n==2) return true;
    if (n%2==0) return false;

    for (int i=3 ; i*i<=n ; i+=2){
        if (n%i==0) return false;
    }
    return true;
}

int main()
{
    int a , b;
    cin>>a>>b;

    for (int i=a ; i<=b ; i++){
        if (isprime(i)){
            cout<<i<<endl;
        }
    }

}