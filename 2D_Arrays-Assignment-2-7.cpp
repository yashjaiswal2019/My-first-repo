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

    // sorting
    for (int i=0 ; i<n ; i++){
        for (int j=i ; j<n ; j++){
            if (v[i][0]>v[j][0]){
                swap(v[i] , v[j]);
            }
        }
    }

    // checking how many intervals to remove to make intervals non overlapping
    
    int a=v[0][0];
    int b=v[0][1];

    int remove=0;

    for (int i=0 ; i<n-1 ; i++){
        if (v[i][0]<=b){
            b==max(v[i][1] , b);
            remove++;
        }
        else {
            a=v[i+1][0];
            b=v[1+1][1];
        }
    }
    cout<<remove<<endl;
}

// got it wrong.