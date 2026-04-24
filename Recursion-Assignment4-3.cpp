// Q3 - Given a number n which denotes the number of variables in the equation and a val which
// denotes the sum of these variables, count the number of such non-negative integral solutions
// that are possible.
// Sample Input: n=5 val=1
// Sample Output: 5
// Explanation: The possible solutions are
// 0,0,0,0,1
// 0,1,0,0,0
// 0,0,0,1,0
// 0,0,1,0,0
// 0,0,0,0,1

#include <iostream>
using namespace std;

int fact(int n);

int main()
{
    int n=5 , val=1;
}

int fact(int n){
    // base case
    if(n==0 || n==1) return 1;
    // assumption
    return n * fact(n-1);
}

// this soln is wrong