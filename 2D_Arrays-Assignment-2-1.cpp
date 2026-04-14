// this was my first attempt wrong solution

// Q1. Given a m*n matrix, Write a function which returns true if the matrix is a perfect matrix. A matrix is
// called perfect if every diagonal from top-left to bottom-right has the same elements.

// in matrices diagonal are defines as 
// (i, j) → (i+1, j+1) → (i+2, j+2) ...

// every such path is duagonal

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m , n;
    cout<<"give rows and columns "<<endl;
    cin>>m>>n;

    vector<vector<int> > v(m , vector<int>(n));
    for (int i=0 ; i<m ; i++){
        for (int j=0 ; j<n ; j++){
            cin>>v[i][j];
        }
    }

    bool flag=false;
    // checking row-wise first
    // have to check till index n-2 , index n-2 included
    for (int i=0 ; i<n-1 ; i++){
        for (int j=0 ; j!=m-1 && i!=n-1 ; j++){
            if (v[i][i]==v[i+j][i+j]){
                flag=true;
            }
            else {
                flag=false;
                cout<<flag<<"in loop";
                return 0;
            }
        }
    }

    // checking column wise 
    for (int i=1 ; i<m-1 ; i++){
        for (int j=0 ; j!=m && i!=n ; j++){
            if (v[i][i]==v[i+j][i+j]){
                flag=true;
            }
            else {
                flag=false;
                cout<<flag<<"in loop";
                return 0;
            }
        }
    }
    cout<<flag<<"out loop";
}