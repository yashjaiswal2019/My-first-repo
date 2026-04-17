// Q3. Given an array of intervals where arr[i] = [start, end], return the minimum number of intervals
// you need to remove to make the rest of the intervals non-overlapping.[
// Sample Input: arr[]=[[1,4],[2,3],[4,5],[6,7]]
// Sample Output: 1
// Explanation: The interval 1,4 and 2,3 are overlapping so removing any one of them will make the intervals
// non overlapping.
// Sample Input: arr[]=[[1,2],[2,3],[3,4],[4,5]]
// Sample Output: 0

#include <iostream>
#include <vector>
using namespace std;

int mergematrix(vector<vector<int> >& v );

int main()
{
    int n;
    cout<<"Please enter number of intervals : ";
    cin>>n;

    vector<vector<int> > v(n , vector<int> (2));
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<2 ; j++){
            cin>>v[i][j];
        }
    }

    cout<<mergematrix(v);
}

int mergematrix(vector<vector<int> >& v ){
    vector<vector<int> > ans;
    int j=0; 
    ans.push_back(v[0]);
    int count=0;

    for (int i=1 ,n=v.size(); i<n ; i++){
        if (v[i][0] < ans[j][1]){
            count++;
            ans[j][1]=max(v[i][1] , ans[j][1]);
        }
        else {
            j++;
            ans.push_back(v[i]);
        }
    }


    return count;
    
}