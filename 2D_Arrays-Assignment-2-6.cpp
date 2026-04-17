// Q2. Given an array of intervals where intervals[i] = [start, end], merge all overlapping intervals, and
// create a function which returns a vector of the non-overlapping intervals that cover all the
// intervals in the input.

// Sample Input: arr[]=[[1,4],[2,3],[5,8],[6,9]]
// Sample Output: [[1,4],[5,9]]
// Sample Input: arr[]=[[1,5],[3,9]]
// Sample Output: [1,9]

// this is Re-apptemp-1

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // first lets take the input from user
    int r;
    cout<<"please enter number of intervals";
    cin>>r;
    vector<vector<int> > v(r , vector<int> (2));
    for (int i=0 ; i<r ; i++){
        for (int j=0 ; j<2 ; j++){
            cin>>v[i][j];
        }
    }

    // now lets sort the array according to first element
    for (int i=0 ; i<r ; i++){
        for (int j=i ; j<r ; j++){
            if (v[i][0]>v[j][0]) swap(v[i] , v[j]);
        }
    }

    // now our array is sorted 

    int a=v[0][0];
    int b=v[0][1];
    vector<vector<int> > ans;

    for (int i=0 ; i<r-1 ; i++){
        if (v[i+1][0] <= b){
            b=max(b , v[i+1][1]);
        }
        else {
            ans.push_back({a , b});
            a=v[i+1][0];
            b=v[i+1][1];
        }
    }

    // pushing in the last value if a and b in ans vector after loop ends
    ans.push_back({a , b});
    
    // printing ans array
    for (int i=0 ; i<ans.size() ; i++){
        cout<<ans[i][0]<<" , "<<ans[i][1]<<endl;
    }
}