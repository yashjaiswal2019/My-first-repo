// Q1. Given a m*n matrix, Write a function which returns true if the matrix is a perfect matrix. A matrix is
// called perfect if every diagonal from top-left to bottom-right has the same elements.

#include <iostream>
#include <vector>

using namespace std;

bool checkPerfect(vector<vector<int> >& v , int n , int m);

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

    // we will skip first row and column and then check for each element if it is equal to is previous diag element
    // v[i][j] --> check for v[i-1][j-1]
    // and will create a flag if we find false return from there else true

    // lets create a Fn for that

    bool flag = checkPerfect(v , n , m);

    cout<<flag;


}    

bool checkPerfect(vector<vector<int> >& v , int n , int m){

    bool perfect=false;
    for (int i=1 ; i<n ; i++){
        for (int j=1 ; j<m ; j++){
            if (v[i][j]==v[i-1][j-1]) perfect=true;
            else return perfect;
        }
    }
    return perfect;
}