// prefix sum in 2d array

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n , m;
    cin>>n>>m;

    vector<vector<int> > v(n , vector<int> (m));
    for (int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>v[i][j];
        }
    }

    for (int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    // for prefix sum till given coordinates (r1, c1) and (r2 , c2)
    int r1 , c1, r2 , c2;
    cout<<"first coordinates : row , column = ";
    cin>>r1>>c1;
    cout<<"second coordinates : row , column = ";
    cin>>r2>>c2;

    int sum=0;
    // lets add first rows and last rows elements first then we will apply 
    // nested loops for the rectangle shaped block between the given coordinates 
    
    // if both coordinates not in same row then there will be a rectangle

    if (r1 != r2  && r2-r1 != 1){

        for (int j=c1 ; j<m ; j++){
            sum+=v[r1][j];
        }
        // for last row
        for (int j=c2 ; j>=0 ; j--){
            sum+=v[r2][j];
        }


        for (int i=r1+1 ; i<=r2-1 ; i++){
            for (int j=0 ; j<m ; j++){
                sum+=v[i][j];
            }
        }
    }
    else {
        if (r1==r2){
            for (int j=c1 ; j<=c2 ; j++){
                sum+=v[r1][j];
            }
        }
        else {      // this means coordinates are in in adjacent rows then 

            for (int j=c1 ; j<m ; j++){
                sum+=v[r1][j];
            }
            // for last row
            for (int j=c2 ; j>=0 ; j--){
                sum+=v[r2][c2];
            }
            

        }
    }

    cout<<sum<<endl;
}