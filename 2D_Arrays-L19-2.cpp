// rotate a given array without using any extra space.

#include <algorithm>
#include<iostream>
#include <vector>
using namespace std;

void swap(int &a , int &b);

void transpose(vector<vector<int> > &v);

int main()
{
    cout<<"please enter number of rows followed by number of columns : ";
    int r , c;
    cin>>r>>c;

    vector<vector<int> > v(r , vector<int> (c));

    cout<<"now enter the values of matrix"<<endl;
    for (int i=0 ; i<r ; i++){
        for (int j=0 ; j<c ; j++){
            cin>>v[i][j];
        }
    }

    // first take transpose then reverse every row

    transpose(v);
    // now reverse each row
    // for this i am going to use v.reverse command
    // but i am thinking i can also use to pointers to swap them

    for(int i=0 ; i<r ; i++){
        reverse(v[i].begin() , v[i].end());
    }

    // printing the matrix
    for (int i=0 ; i<r ; i++){
        for (int j=0 ; j<c ; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}

void swap(int &a , int &b){
    int temp=a;
    a=b;
    b=temp;
}

void transpose(vector<vector<int> > &v){

    int rows = v.size();
    int columns = v[0].size();
    // swapping
    for (int i=0 , j=0 ;  i<rows  ; i++ , j++){
        for (int j=i+1 ; j<columns ; j++){
            if (v[i][j] != v[j][i]){
                swap(v[i][j] , v[j][i]);
            }
        }
    }
}