#include <iostream>
using namespace std;

int main()
{
    char vowel[5];

    for (int idx=0 ; idx<5 ; idx++){    //taking in input of arrays from user
        cin>>vowel[idx];
    }

    for (char index:vowel){
        cout<<index<<" ";
    }
}