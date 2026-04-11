//given array of size N and we get q querries to answer the sum of those elements in between including the edges
//querries are of indexing -> 1

//this solution is not optimized for every querry we do n operations ==> n querries , n operations per querry -> O(n^2)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr={5, 1, 2, 3, 4};
    int size = arr.size();
    //considering the querries will be in range and we do not have to deal with that

    int q;
    cout<<"please enter Number of querries : ";
    cin>>q;

    for (int i=0 ; i<q ; i++){
        int start , end;
        cout<<"starting = ";
        cin>>start;
        cout<<"Ending = ";
        cin>>end;

        int total=0;

        for (int i=start-1 ; i<=end-1 ; i++){
            total+=arr[i];

        }
        cout<<total<<endl;
    }
}
 