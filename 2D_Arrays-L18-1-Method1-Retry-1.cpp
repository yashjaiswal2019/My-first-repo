// Retry - 1. 

// lets solve this question by our Addition observation in pascal's triangle
// this solution is moreoptimised in case of printing whole of pascal triange till line n given by user. 

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > makepascal(int n);


int main()
{
    int n;
    cout<<"Please enter number of rows to printed of pascal's triangle : " ;
    cin>>n;

    vector<vector<int> > ans;
    
    ans=makepascal(n);
    //printing the pascal triangle
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<ans[i].size() ; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}


vector<vector<int> > makepascal(int n){
    
    vector<vector<int> > pascal(n);

    for (int i=0 ; i<n ; i++){
        // resizing the ith vector inside pascal  --> reason explained at same location in file "2D_Arrays-L18-Method2.cpp"
        pascal[i].resize(i+1);

        for (int j=0 ; j<i+1 ; j++){
            
            if (j==0 || j==i) pascal[i][j]=1;     // --> because last and first element will always be 1.

            else pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
        }
    }
    return pascal;
}

// Got it Correct in retry 1.