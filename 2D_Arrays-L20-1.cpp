// print the elements of matrix in spiral order

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;           // n-> rows , m-> columns
    cin>>n>>m;

    vector<vector<int> > v(n , vector<int> (m));
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            cin>>v[i][j];
        }
    }

    int top=0 , bottom=n-1 , left=0 , right=m-1;

    int direction=0;        // i am thinking of writing condition that if top!=botom keep loop running

    while (top<=bottom && left<=right){
        if(direction%4 ==0){
            for (int i=left ; i<=right ; i++){
                cout<<v[top][i]<<" ";
            }
            top++ ,  direction++;
        }
        else if (direction%4 ==1){
            for (int j=top ; j<=bottom ; j++){
                cout<<v[j][right]<<" ";
            }
            right-- , direction++; 
        }
        else if (direction%4 ==2){
            for (int j=right ; j>=left ; j--){
                cout<<v[bottom][j]<<" ";
            }
            bottom-- , direction++;
        }
        else if (direction %4 ==3){
            for (int i=bottom ; i>=top ; i--){
                cout<<v[i][left]<<" ";
            }
            left++ , direction++;
        }
    }
}