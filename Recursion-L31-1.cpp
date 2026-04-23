// given number n print number in increasing sequence without using any loops

#include <iostream>
using namespace std;

void print(int n);

int main()
{
    int n=190;
    print(n);
}

void print(int n){
    // base-case
    if (n==0) return;
    // assumption
    print(n-1);
    // self-work
    cout<<n<<" ";
}
//  Time-Complexity = O(n)
// Space-Complexity = O(n)