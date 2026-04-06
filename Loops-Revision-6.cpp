//print the plus pattern

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    //conidering user gives an odd input because only then it will have a perfect plus sign

    for (int i=1 ; i<=n ; i++){
        if (i==(n+1)/2){
            for (int j=1 ; j<=n ; j++){
                cout<<"*";
            }
            cout<<endl;
        }
        else {
            for (int j=1 ; j<=(n+1)/2 ; j++){
                if (j==(n+1)/2){
                    cout<<"*";
                }
                else {
                    cout<<" ";
                }
        
            }
            cout<<endl;
        }
    }
}