// write a program to display a transpose of matrice entered by a user

// my solution

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
    for (int i=0 ; i<c ; i++){      // this i will iterate in column for ans matrix but on rows for given matrix 
        int j=0;  // j -> iterates on row for ans matrix , and iterates on column for given matrice
        while (j<r){
            ansMatrix[i][j]=matrix[j][i];
            j++;
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