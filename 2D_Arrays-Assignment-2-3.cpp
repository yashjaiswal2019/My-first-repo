// Q1. Given a m*n matrix, Write a function which returns true if the matrix is a perfect matrix. A matrix is
// called perfect if every diagonal from top-left to bottom-right has the same elements.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n , m;
    cout<<"give array row and column : ";
    cin>>n>>m;

    vector<vector<int> > v(n , vector<int> (m));
    cout<<"now give elements ";
    for (int i =0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            cin>>v[i][j];
        }
    }
    
    // checking row wise first
    bool rowflag=true;
    for(int c=0 ; c<m ; c++){
        bool flag=true;
        for (int k=0 ; k<n ; k++){
            if (c+k==m-1) break;
            if (v[1][c] != v[1+k][c+k]){
                flag=false;
                cout<<flag<<endl;
               
            }
        }
        if (flag=false) rowflag=false;
        
    }

    // checking column wise 
    bool columnflag=true;
    for (int r=0 ; r<n ; r++){
        bool flag=true;
        for (int k=0 ; k<m ; k++){
            if (r+k==n-1) break;
            if (v[r][1] != v[r+k][1+k]){
                flag=false;
                cout<<flag<<endl;
            }
        }
        if (flag=false) columnflag=false;
    }

    if (rowflag==true && columnflag==true){
        cout<<true;
    }
    else {
        cout<<" not true check";
    }

}

// got it wrong