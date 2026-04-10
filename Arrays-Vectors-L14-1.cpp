//find the total number of pair in the given array whoose sum is equal to given value x.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v={3 , 4, 6, 7, 1 , 2 , 0};
    cout<<"please put in value of x : ";
    int x;
    cin>>x;

    int l=v.size();
    int pairs=0;
    
    for (int i=0 ; i<l ; i++){
        for (int j=i+1 ; j<l ; j++){;
            if (v[j]==x-v[i]) pairs++;
        }
    }
    cout<<pairs<<endl;

}