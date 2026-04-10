#include <iostream>
using namespace std;

// void makeBlock(int n){                   //this one is basic using nested loops.
//     for (int i=0 ; i<n ; i++){
//         for (int j=0 ; j<i+1 ; j++){
//             cout<<"#";
//         }
//         cout<<endl;
//     }
//     return;
// }

void betterMakeBlock(int n);

int main(){
    int x;
    cin>>x;

    betterMakeBlock(x);

}

void betterMakeBlock(int n){
    //base case 
    if (n<0) return;
    else {
        betterMakeBlock(n-1);       //here program recalls itself this is recursion
        //making a row
        for (int i=0 ; i<n ; i++){
            cout<<"#";
        }
        cout<<endl;
    }   
}