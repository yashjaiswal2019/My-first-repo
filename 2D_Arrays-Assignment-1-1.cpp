// Given a 2D matrix with m rows and n columns containing integers, find and print the
// maximum value present in the array.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m , n;
    cout<<"please enter rows and columns of matrix ";
    cin>>m>>n;

    vector<vector<int> > v( m , vector<int> (n));
    //taking matrix inputs
    for (int i=0 ; i<m ; i++){
        for (int j=0 ; j<n ; j++){
            cin>>v[i][j];
        }
    }

    //traverse vector and find highest

    int high=INT32_MIN;

    for (int i=0 ; i<m ; i++){
        for (int j=0 ; j<n ; j++){
            if (v[i][j]>high){
                high=v[i][j];
            }
        }
    }
    cout<<high<<endl;
}