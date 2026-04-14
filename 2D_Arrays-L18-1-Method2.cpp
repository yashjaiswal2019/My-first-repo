// Method 2  --> by combination method nCr 

// print the pascal triangle till the nth row given by user

// this solution will not be optimal becaue computer will have to do munliple steps for each element in each iteration in each loop

#include <iostream>
#include <vector>
using namespace std;

int factorial(int n);

int combination(int n , int r);

vector<vector<int> > makepascal(int n);



int main()
{
    int n;
    cout<<"Please enter number of rows to printed of pascal's triangle : " ;
    cin>>n;

    vector<vector<int> > ans(n);  // --> we can initialize the 2D vector with n rows inside it , these rows are also vectors

    ans = makepascal(n);
    // printing the answer vector that now contains pascal triangle values 
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<ans[i].size() ; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}



int factorial(int n){
    int ans=1;
    while (n>0){
        ans *= n;
        n--;
    }
    return ans;
}

int combination(int n , int r){
    int ans;
    ans = factorial(n)/(factorial(r) * factorial(n-r));
    return ans;
}

vector<vector<int> > makepascal(int n){

    // making 2D vactor pascal 
    vector<vector<int> > pascal(n);     
    
    // now when we have initialized this pascal 2D vactor the size of every vector inside it is zero now
    // so we canot apply loop on it directly it will either throw error or behave weirdly
    
    // we have to adjust the size of every ith vector accordingly inside the loop 

    for (int i=0 ; i<n ; i++){
        pascal[i].resize(i+1);  // -> resized to i+1 because indexing starts from 0

        for (int j=0 ; j<i+1 ; j++ ){  // here j will go till i+1 because if i==0 then,  j==0 condition will not satisfy first element will not be printed and loop will not start
            pascal[i][j] = combination(i , j); 
        }
    }

    return pascal;
}

// Got it Correct in Retry - 1.