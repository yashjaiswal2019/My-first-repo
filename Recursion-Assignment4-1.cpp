// Q1 - Given a number n, print the following pattern without using any loop.
// n, n-5, n-10, ..., 0, 5, 10, ..., n-5, n
// There should be 0 or at most one occurrence of negative number in the series.
// Sample Input: n = 16
// Sample Output: 16, 11, 6, 1, -4, 1, 6, 11, 16
// Sample Input: n = 10
// Sample Output: 10, 5, 0, 5, 10

#include <iostream>
using namespace std;

void decreasePrint(int n , int *tempPtr);
void increasePrint(int n , int temp);

int main()
{
    int n=16;
    int temp=n;
    int *tempPtr = &temp;
    // lets use two recursions to print the values as one to print decreasing by 5 and when value gets negative we will do 
    // print increasing by 5.
    decreasePrint (n , tempPtr);
    increasePrint(n , temp);
}

void decreasePrint(int n , int *tempPtr){
    // base case 
    if (n <= 0) {
        *tempPtr = n;
        return ;
    }
    // assumption
    cout<<n<<" "; 
    decreasePrint(n-5 , tempPtr);
}

void increasePrint(int n , int temp){
    // base case
    if (temp > n) return;
    cout<<temp<<" ";
    increasePrint(n , temp+5);  
}