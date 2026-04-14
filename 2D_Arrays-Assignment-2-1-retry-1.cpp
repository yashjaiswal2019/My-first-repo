// Retry -1 

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
    int r , c;
    cout<<"give Rows and Columns ";
    cin>>r>>c;

    vector<vector<int> > v(r , vector<int>(c));
    for (int i=0 ; i<r ; i++){
        for (int j=0 ; j<c ; j++){
            cin>>v[i][j];
        }
    }

    bool flag=false;
    // checking on first row
    for (int k=0 ; k<c ; k++){
        int n=0; 
        while (k<c && n<r){
            if (v[1][k]==v[1+n][k+n]){
                flag=true;
                n++;
            }
            else {
                flag=false;
                break;
            }
        }
    }

    // checking first column
    for (int k=0 ; k<r ; k++){
        int n=0;
        while (k<r && n<c){
            if (v[k][1]==v[k+n][1+n]){
                flag=true;
                n++;
            }
            else {
                flag=false;
                break;
            }

        }
    }

    cout<<flag;



}

// still wrong 