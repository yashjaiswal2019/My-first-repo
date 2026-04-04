//mistaken took two inputs by mistake.

#include <iostream>
using namespace std;

int main()
{
    int row , column;
    cin>>row>>column;

    for (int i=1 ; i<=row ; i++){
        for (int j=1 ; j<=column ; j++){
            if (j<=i){
                cout<<"#";
            }
            else {
                break;
            }
        }
        cout<<endl;
    }

}