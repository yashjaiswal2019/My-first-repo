// Q2 - Find m-th summation of first n natural numbers where m-th summation of first n natural
// numbers is defined as following:

// If m > 1: SUM(n, m) = SUM(SUM(n, m - 1), 1)
// Else :SUM(n, 1) = Sum of first n natural numbers.

// Sample Input: n = 3, m = 2
// Sample Output: SUM(3, 2) = 21
// Explanation : SUM(3, 2)
//             = SUM(SUM(3, 1), 1)
//             = SUM(6, 1)
//             = 21

// Sample Input: n = 4, m = 1
// Sample Output: SUM(4, 1) = 10

#include <iostream>
using namespace std;

int sum(int n , int m);

int main()
{
    int n=3 , m=2;
    int result = sum(n , m);
    cout<<result<<endl;
}

int sum(int n , int m){
    // base case 
    if (m==1) return (n*(n+1))/2;
    // assumption
    return sum(sum(n , m-1) , 1);
}