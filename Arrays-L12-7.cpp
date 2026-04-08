#include <iostream>
using namespace std;

int main()
{
    int array[]= {3 , 9, 8, 11, 7};
    int key;
    cout<<"what are we finding inside the array ?"<<endl;
    cin>>key;

    for (int i=0 ; i<5 ; i++){
        if (key==array[i]) {
            cout<<"the key is available in Array at index = "<<i<<endl;
            return 0;
        }
    }
    cout<<"the key is not available in Array"<<endl<<"-1";

    return 0;
}