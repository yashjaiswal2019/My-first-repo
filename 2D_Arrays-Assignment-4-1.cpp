// Q1 - Write a user defined function upper() which takes an integer square matrix as an input and
// its size N and prints the upper half of the matrix.
// Sample Input:arr[][]=[[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]] N=4
// Sample Output: 1 2 3 4
//                  6 7 8
//                   11 12
//                      16

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n , m;
    cout<<"please enter number of rows and columns : ";
    cin>>n>>m;

    vector<vector<int> > v(n , vector<int> (m));

    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            cin>>v[i][j];
        }
    }

    // now lets print from given matrix

    // we will have to use three loops one for rows , one for printing spaces 
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<i ; j++){
            cout<<" ";
        }
        for (int j=i ; j<m ; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}