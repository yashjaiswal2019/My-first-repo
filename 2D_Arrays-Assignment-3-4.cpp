// Q4 - ​Given an integer array arr, return the number of consecutive sequences(subarrays) with
// odd sum.

// Input:[1,3,5]
// Output:4
// Explanation:These sequences are [1],[3],[5] and [1,3,5]
// Input:[0,2,4]
// Output:0

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {-1 , 3,  2, 4 , 1};
    // thinking of bruteforce we make all possible subarrays and check if sum is odd
    // we can make it a O(n^2) if we make prefix sum array of every sub array and check if next term is odd if odd increase number of odds by 1
    int possiblearr=0;
    for (int st=0 , n=arr.size() ; st<n ; st++){
        int sum=0;
        for (int endpt=st; endpt<n ; endpt++){
            sum+=arr[endpt];

            if (sum & 1){       // let's try if we can also print those sub arrays
                possiblearr++;
                for (int i=st ; i<=endpt ; i++){
                    cout<<arr[i]<<",";
                }
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    cout<<possiblearr<<endl;
}