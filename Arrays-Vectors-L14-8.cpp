#include <iostream>
#include <vector>
using namespace std;

int main()    
{
    vector<int> arr={1, 3, 4, 6, 2, 2, 4, 2, 3, };
    int size=arr.size();

    const int N=1e5+10;
    vector<int> freq(N , 0);   //1e5+10 means 100000 [1 lakh].

    for(int i=0 ; i<size ; i++){
        freq[arr[i]]++;
    }

    int q;
    cout<<"number of querries : ";
    cin>>q;

    for (int i=0 ; i<q ; i++){
        int querry;
        cin>>querry;
        
        cout<<"this is present "<<freq[querry]<<" times inside the array."<<endl; 
    }
}