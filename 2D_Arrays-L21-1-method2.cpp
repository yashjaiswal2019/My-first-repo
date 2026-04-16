// we can also use prefix sum method , do some pre processing and then , we can answer querries with querry time O(1).

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > makePrefixSum2D(vector<vector<int> > v , int n , int m);

int main()
{
    int n , m;
    cin>>n>>m;
    vector<vector<int> > v(n , vector<int> (m));
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            cin>>v[i][j];
        }
    }
    // printing given array
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    // making prefix sum array for every row -> presum matrix
    vector<vector<int> > ans=makePrefixSum2D(v , n , m);

    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    int r1 , c1 , r2 , c2;
    cout<<"first coordinate = ";
    cin>>r1>>c1;
    cout<<"second coordinates = ";
    cin>>r2>>c2;
    // have to traverse on row wise for matrix
    int sum=0;
    for (int i=r1 ; i<=r2 ; i++){
        if (c1 != 0){
            sum+=ans[i][r1]-ans[i][r2-1];
        }
        else {
            sum+=ans[i][r2];
        }
    }
    cout<<sum;

}


vector<vector<int> > makePrefixSum2D(vector<vector<int> > v , int n , int m){

    vector<vector<int> > ans(n , vector<int> (m));
    
    
    for (int i=0 ; i<n ; i++){
        int sum=0;
        for (int j=0 , column=m; j<column ; j++){
            sum+=v[i][j];
            ans[i][j]=sum;
        }
    }
    return ans;
}