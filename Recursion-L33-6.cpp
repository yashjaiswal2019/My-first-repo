// find total number of possible paths in a given metrix to reach from top left to bottom right 

#include <iostream>
using namespace std;

int totalPath(int i , int j , int m , int n);

int main()
{
    int m , n;
    cin>>m>>n;

    int paths = totalPath(0 , 0 , m , n);
    cout<<paths<<endl;
}

int totalPath(int i , int j , int m , int n){
    // base case 
    if (i>=m || j>=n) return 0;             // if we go outside of out maze we cannot come back
    if (i == m-1 && j == n-1) return 1;     // we are at the required destination
    // self work and assumption
    return totalPath(i , j+1 , m , n) + totalPath(i+1 , j , m , n);
}