// print the pascal triangle till the nth row given by user

#include <iostream>
#include <vector>
using namespace std;

vector<vector <int> > pascalTriangle(int n);

int main()
{
    int n;
    cin>>n;

    vector<vector <int> > ans(n);

    ans = pascalTriangle(n);

    //printing the pascal triangle
    for (int i=0 ; i<ans.size() ; i++){
        for (int j=0 ; j<ans[i].size() ; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}

vector<vector <int> > pascalTriangle(int n){
    vector<vector <int> > pascal(n);

    for (int i=0 ; i<n ; i++){
        // here we would have to resize the ith vector of pascal vector thich is a vector of vectors
        // because when we initialized the pascal vector , the size of every vector inside it is zero 
        // so we have to resize

        pascal[i].resize(i+1);    // because we have 0 indexing we have to resize it to i+1

        for (int j=0 ; j<=i ; j++){
            if (j==0 || j==i) pascal[i][j]=1;
            else {
                pascal[i][j]=pascal[i-1][j] + pascal[i-1][j-1];
            }
        }
    }

    return pascal;
}