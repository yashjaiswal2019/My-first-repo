// Q2 - A square matrix is said to be an perfect Matrix if both of the following conditions hold:
// a) All the elements in the diagonals of the matrix are non-zero integers.
// b) All other elements except the diagonal elements are 0.
// Given a 2D integer array grid of size n x n representing a square matrix, return true if grid
// is a perfect matrix. Otherwise, return false using functions.

// Sample Input: [[1,0,0,1],[0,2,1,0],[0,1,2,0],[3,0,0,1]]
// Sample Output: true
// Sample Input: [[5,7,0],[0,3,1],[0,5,0]]
// Sample Output: false

#include <iostream>
#include <vector>
using namespace std;

bool checkPerfect(vector<vector<int> >& v , int n);

int main()
{
    int n; 
    cout<<"please enter Order of Matrix : ";
    cin>>n;
    vector<vector<int> > v(n , vector<int> (n));
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<n ; j++){
            cin>>v[i][j];
        }
    }
    
    if (checkPerfect(v , n)) cout<<"TRUE"<<endl;
    else cout<<"FALSE"<<endl;
    
}

bool checkPerfect(vector<vector<int> >& v , int n){

    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<n ; j++){
            if (i==j){
                if(v[i][j] == 0) return false;
            }
            else {
                if (v[i][j] != 0) return false;
            }
        }
    }
    return true;
}