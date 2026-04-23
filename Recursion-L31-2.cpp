// print k multiples of n without loop

#include <iostream>
using namespace std;

void print (int n , int k);

int main()
{
    int n=2;
    int k=102400;

    print(n , k);
}

void print (int n , int k){
    // base case
    if (k<=0) return ;
    // assempton
    print(n , k-1);
    // self-work
    cout << n * k << " ";
}

//  Time-Complexity = O(K)
// Space-Complexity = O(K)