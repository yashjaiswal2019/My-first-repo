#include <iostream>
using namespace std;

int main()
{
    int arr[7];
    int odd=0 , even=0;

    for (int i=0 ; i<7 ; i++){
        cin>>arr[i];
    }

    for (int j=0 ; j<7 ; j++){
        if (arr[j] & 1) odd++;
        else even++;
    }
    cout<<"odd = "<<odd<<endl<<"even = "<<even;
}