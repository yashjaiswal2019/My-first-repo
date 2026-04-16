// given a input n print a matrix filled with 1 ti n^2 in matrix in spiral order

#include <iostream>
#include <vector>
using namespace std;

void fillsquareinspiral(vector<vector<int> >& v , int n);

int main()
{
    int n;
    cin>>n;

    vector<vector<int> > v(n , vector<int> (n));

    fillsquareinspiral(v , n);

    // printing and matrix
    for(int i=0 ; i<n ; i++){
        for (int j=0 ; j<n ; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

void fillsquareinspiral(vector<vector<int> >& v , int n){

    int top=0 , bottom=n-1 , left=0 , right=n-1;
    int direction = 0;
    int m=1;
    
    while(top<=bottom && left<=right){
        // printing top row left to right
        if (direction==0){
            for (int col=left ; col<=right ; col++){
                v[top][col]=m*m;
                m++;
            }
            top++;
        }
        else if(direction==1){
            for (int row=top ; row<=bottom ; row++){
                v[row][right]=m*m;
                m++;
            }
            right--;
        }
        else if (direction==2){
            for (int col=right ; col>=left ; col--){
                v[bottom][col]=m*m;
                m++;
            }
            bottom--;
        }
        else {
            for (int row=bottom ; row>=top ; row--){
                v[row][left]=m*m;
                m++;
            }
            left++;
        }

        direction = (direction+1)%4;
    }
}