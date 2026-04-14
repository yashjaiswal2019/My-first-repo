// this method is more optimised 

#include <iostream>
#include<vector>
using namespace std;

int maxOnesInRow(vector<vector<int> > v , int n , int m);

int main()
{
    int n , m;
    cout<<"please enter number of rows followed by number of columns : ";
    cin>>n>>m;

    vector<vector<int> > given(n , vector<int> (m));
    //taking input for matrix 
    cout<<"now please enter inputs of matrix"<<endl;
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            cin>>given[i][j];
        }
    }


    int ans = maxOnesInRow(given , n , m);
    cout<<ans;
    return 0;

}

int maxOnesInRow(vector<vector<int> > v , int n , int m){
    // we will traverse array from right to left and see the index of last occoured 1 
    // then in next row we will traverse next row from that index again from right to left and see where one occours

   int leftMostOne=m-1;
   int ansrow = -1;

   for (int i=0 ; i<n ; i++){
        for (int j=leftMostOne ; j>=0 ; j--){
            if (v[i][j]==1){
            leftMostOne=j;
            ansrow=i;
            }
            else break;
        }
   }
   return ansrow;
}