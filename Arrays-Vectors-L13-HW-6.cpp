#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr={2, 2, 2};
    int size = arr.size();

    int targetsum;
    cin>>targetsum;

    //what if i also had to print those pairs ??

    int pairs = 0;
    int identicalPair=0;

    for(int i=0 ; i<size ; i++){
        for (int j=i+1 ; j<size ; j++){
            if (arr[i]+arr[j]==targetsum){
                if (arr[i]==arr[j]) identicalPair++;
                pairs++;
                cout<<arr[i]<<" , "<<arr[j]<<endl;      //see what pairs computer is taking.
            }
        }

    }

    cout<<pairs-identicalPair+1;

    
}