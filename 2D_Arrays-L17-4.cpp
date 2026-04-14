// write a program to display a transpose of matrice entered by a user

// Mam's logic ==> this one is more straight forwrd.

#include <iostream>
using namespace std;

int main()
{
    // taking in the matrice as input first 
    int r , c;
    cin>>r>>c;

    int matrix[r][c];

    for (int i=0 ; i<r ; i++){
        for (int j=0 ; j<c ; j++){
            cin>>matrix[i][j];
        }
    }

    // in transpose we make rows to columns and columns to rows

    int ansMatrix[c][r];
    for (int i=0 ; i<c ; i++){      
        for (int j=0 ; j<r ; j++){
            ansMatrix[i][j]=matrix[j][i];
        }
    }

    //printing ans matrix 

    for (int i=0 ; i<c ; i++){
        for (int j=0 ; j<r ; j++){
            cout<<ansMatrix[i][j]<<"  ";
        }
        cout<<endl;
    }
}