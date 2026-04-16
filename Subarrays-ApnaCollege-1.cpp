// print out all of possible subarrays

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[]={1 , 2 , 3 , 4, 5};

    int size = sizeof(arr)/sizeof(arr[0]);

    // printing all subarrays
    for (int st=0 ; st<size ; st++){        // traversing on each element for st pt 
        for (int endpt=st ; endpt<size ; endpt++){      // traversing for end pt from every st point
            for (int i=st ; i<=endpt ; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
}