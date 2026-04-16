// method 3 --> calculating prefix sum over rows and columns

#include <iostream>
#include <vector>
using namespace std;
vector<vector<int> > prefixSumColumn (vector<vector<int> > v , int n , int m);
vector<vector<int> > prefixSumRow (vector<vector<int> > v , int n , int m);
int main()
{
    int n , m;
    cin>>n>>m;
    vector<vector<int> > v (n , vector<int> (m));
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            cin>>v[i][j];
        }
    }

    vector<vector<int> > ansRow=prefixSumRow(v , n , m);
    vector<vector<int> > prefixRowAndColumnMatri=prefixSumColumn(ansRow , n , m);

    // printing rctangle sum matrix 
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            cout<<prefixRowAndColumnMatri[i][j]<<" ";
        }
        cout<<endl;
    }

    // now answering the querries

    int r1 , c1 , r2 , c2;
    cout<<"first coordinate = ";
    cin>>r1>>c1;
    cout<<"second coordinate = ";
    cin>>r2>>c2;

    int top_sum=0 , left_sum=0 , topleft_sum=0;
    if (r1 != 0) top_sum=prefixRowAndColumnMatri[r1-1][c2];
    if (c1 != 0) left_sum=prefixRowAndColumnMatri[r2][c1-1];
    if (c1!= 0 && r1 != 0) topleft_sum=prefixRowAndColumnMatri[r1-1][c1-1];

    int result = prefixRowAndColumnMatri[r2][c2] - top_sum - left_sum + topleft_sum;

    cout<<result<<endl;
}

vector<vector<int> > prefixSumRow (vector<vector<int> > v , int n , int m){
    vector<vector<int> > ans(n , vector<int> (m));
    for (int i=0 ; i<n ; i++){
        int sum=0;
        for (int j=0 ; j<m ; j++){
            sum+=v[i][j];
            ans[i][j]=sum;
        }
    }
    return ans;
}

vector<vector<int> > prefixSumColumn (vector<vector<int> > v , int n , int m){
    vector<vector<int> > ans(n , vector<int> (m));

    for (int j=0 ; j<m ; j++){
        int sum=0;
        for (int i=0 ; i<n ; i++){
            sum+=v[i][j];
            ans[i][j]=sum;
        }
    }
    return ans;
}