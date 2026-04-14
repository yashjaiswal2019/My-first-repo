// Given a m*n integer matrix. If an element of the matrix is 0 then set the complete row and
// column of that element to 0. Make the changes inplace and print the matrix.

// m=3
// n=3
// arr[]={{1,2,3},{1,0,1},{5,6,7}}
// Output: {{1,0,3},{0,0,0},{5,0,7}}
// arr[]={{0,1,2,0},{3,4,5,2},{1,3,1,5}}
// Output:{{0,0,0,0},{0,4,5,0},{0,3,1,0}}

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m , n;
    cout<<"enter roes and columns"<<endl;
    cin>>m>>n;

    vector<vector<int> > v(m , vector<int> (n));

    for (int i=0 ; i<m ; i++){
        for (int j=0 ; j<n ; j++){
            cin>>v[i][j];
        }
    }

    // we can make two reference arrays one for row and one for column if they itself contain zero or not 
    bool flagrow=false , flagcolumn = false;

    int rowRefe[m] = {0};
    int columnRef[n] = {0};

    for (int i=0 ; i<m ; i++){          // marking the row and column reference 
        for (int j=0 ; j<n ; j++){
            if (v[i][j]==0){
                rowRefe[i]=1;
                columnRef[j]=1;
            }
        }
    }

    // now i have to make every row and column that have row and column reference 1 in it make them zero
    for (int k=0 ; k<n ; k++){      // making columns zero
        if (columnRef[k]==1){
            for (int i=0 ; i<m ; i++){
                v[i][k]=0;          // updating that column elements
            }
        }
    }

    for (int k=0 ; k<m ; k++){      // making rows zero
        if (rowRefe[k]==1){
            for (int j=0 ; j<n ; j++){
                v[k][j]=0;
            }
        }
    }

    // // making row and column zero if first row and column have 0 in them
    // if (flagrow==true){
    //     for (int i=0 ; i<n ; i++){
    //         v[1][i]=0;
    //     }
    // }
                                                                                    // we do not nwwd this as we marked it in the reference so we dont need this
    // if (flagcolumn==true){
    //     for (int j=0 ; j<n ; j++){
    //         v[j][1]=0;
    //     }
    // }

    // printing final v array
    for (int i=0 ; i<m ; i++){
        for (int j=0 ; j<n ; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}