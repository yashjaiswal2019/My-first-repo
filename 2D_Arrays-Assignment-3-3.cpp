// Q3 - ​Given an integer array arr consisting of 0's and 1's only, return the max length of
// sequence which contains equal numbers of 0 and 1.

// Input:arr=[0,1,0,1]
// Output:4
// Explanation:The longest sequence is 0,1,0,1

// Input:arr=[0,1,1,0,1,1,1]
// Output:4
// Explanation:The longest sequence is 0,1,1,0

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {0,1,1,1,1,1,0,0,0 , 1, 0, 1, 1 ,0 , 0, 1, 1, 0, 0, 1, 0};

    // find all possible sequences and in each sequence check if number of zeroes == ones then
    // this is brute force method
    int maxSubSize=0;
    for(int st=0 , n=v.size() ; st<n ; st++){       // picking the starting index
        
        for (int endpt=st ; endpt<n ; endpt++){     // picking the ending point
            int zeroes=0 , ones=0;
            for (int i=st ; i<=endpt ; i++){
                if (v[i]==0) zeroes++;
                else ones++;
            }
            if (ones==zeroes){
                if (maxSubSize<ones+zeroes) maxSubSize = ones+zeroes; 
            }
        }
    }

    cout<<maxSubSize<<endl;
}


