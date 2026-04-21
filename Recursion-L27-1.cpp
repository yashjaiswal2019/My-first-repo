// Factorial recursive 

#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
    int i;
    cin>>i;

    cout<<factorial(i);
}

int factorial(int n){
    if (n==1 || n==0) return 1;

    int ans = n * factorial(n-1);
    return ans;
}