// this solution has time complexity O(n * m)

#include <iostream>
#include <vector>
using namespace std;

int maximumonesrow(vector<vector<int> > nums){
    int n=nums.size();
    int m=nums[0].size();

    int maxOnesinRow=INT32_MIN;
    int ansrow=-1;      // if fn returns -1 it means 2D vector vcontains all zeros

    for (int i=0 ; i<n ; i++){
       for (int j=0 ; j<m ; j++){
        if (nums[i][j]==1){
            int ones = m-j;
            if (ones>maxOnesinRow){
                maxOnesinRow=ones;
                ansrow=i;
                break;
            }
            else break;
        }
       }
    }
    return ansrow;
}    

int main()
{
    int n , m;
    cin>>n>>m;
    vector<vector<int> > given(n , vector<int> (m));

    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            cin>>given[i][j];
        }
    }
    
    int result=maximumonesrow(given);
    
    cout<<result;
    
}