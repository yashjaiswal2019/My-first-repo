// Q2. Given an array of intervals where intervals[i] = [start, end], merge all overlapping intervals, and
// create a function which returns a vector of the non-overlapping intervals that cover all the
// intervals in the input.

// Sample Input: arr[]=[[1,4],[2,3],[5,8],[6,9]]
// Sample Output: [[1,4],[5,9]]
// Sample Input: arr[]=[[1,5],[3,9]]
// Sample Output: [1,9]

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int r;
    cout<<"Enter number of intervals : ";
    cin>>r;
    cout<<"Enter intervals Now : ";
    vector<vector<int> > v(r , vector<int> (2));
    for (int i=0 ; i<r ; i++){
        for (int j=0 ; j<2 ; j++){
            cin>>v[i][j];
        }
    }

    // have to arrange this given matrix in ascending order of first element
    for (int i=0 ; i<r ; i++){
        for (int j=i ; j<r ; j++){
            if (v[i][0]>v[j][0]) swap(v[i] , v[j]);
        }
    }
    // now our array matrix is sorted

    vector<vector<int>> ans;

    int a=v[0][0];
    int b=v[0][1];
    for (int i=0 ; i<r-1 ; i++){
        if (v[i+1][0] <= b ){
            b= max(b , v[i+1][1]);
        }
        else {
            
            ans.push_back({a , b});
            a=v[i+1][0];
            b=v[i+1][1];
        }
    }

    // pushing last interval
    ans.push_back({a , b});

    // printing ans array
    for (int i=0 ; i<ans.size() ; i++){
        cout<<ans[i][0]<<" , "<<ans[i][1]<<endl;
    }
    
    
}