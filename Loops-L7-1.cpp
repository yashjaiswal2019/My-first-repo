#include <iostream>
using namespace std;

int main()
{
    int row;
    int column;

    cin>>row;
    cin>>column;

    
    for (int r=1 ; r<=row ; r++){
        for (int c=1 ; c<=column ; c++){
            cout<<"#";
        }
        cout<<endl;
    }
}