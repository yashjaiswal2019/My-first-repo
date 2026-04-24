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

int possible (int n , int remainingSum);

int main()
{
    int n=5 , val=1;
    cout<<possible(n , val);
}

int possible (int n , int remainingSum){
    if (remainingSum < 0) return 0;
    // base case 
    // if our n become 1 then there is only on way to assign it value k
    if (n == 0) return remainingSum == 0;  // short trick of writing 

    // if (n==0) {
    //     if (remainingSum==0) return 1;
    //     else return 0;
    // }

    // self work
    int ways =0;  // ways i can assign values to an element
    for (int i=0 ; i<=remainingSum ; i++){
        ways += possible(n-1 , remainingSum - i);
    }
    return ways;
}