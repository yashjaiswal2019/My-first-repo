//my answer and logic using many if-else.

#include <iostream>
using namespace std;

int main()
{
    int row;
    int column;

    cin>>row;
    cin>>column;

    for (int i=1 ; i<=row ; i++){
        for (int j=1 ; j<=column ; j++){
            if (i==1 || i==row){
            cout<<"#";
        }
        else {
            if (j==1 || j==column){
                cout<<"#";
            }
            else {
                cout<<" ";
            }
        }
        }
        cout<<endl;
    }
}