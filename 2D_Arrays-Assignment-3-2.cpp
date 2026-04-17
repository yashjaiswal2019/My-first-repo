// Q2 - ​There is a man going on a trek. The trek consists of n + 1 points at different altitudes. The
// man starts his trek on point 0 with altitude equal 0. You are given an integer array height
// of length n where height[i] is the net height in altitude between points i​ and i + 1 for all
// (0 <= i < n). Return the highest altitude of a point.

// Input:height=[ 4,1,6,0,-8]
// Output:3
// Explanation: The man starts at 0 and since then the altitudes covered will be [0, 4, 3,3,3, 5] so
//              the greatest altitude will be 3

// Input:height=[ 5, 3, 2]
// Output:0
// Explanation: The man starts at 0 and since then the altitudes will be[0, 5, 3, 2] so the greatest
//              altitude will be 0.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // the man travels from point to point and we are given a array of height dist btw i and i+1 th point
    // we can do this using prefix sum array

    vector<int> v={-4 , 1 , 6 , 0 , -8};

    v.insert(v.begin() , 0);
    // making this prefix sum array
    for (int i=1 , n=v.size(); i<n ; i++){
        v[i] += v[i-1];
    }

    // now the max element of this will give the ans of highest altitude
    int max=INT32_MIN;
    for (int i=0 , n=v.size() ; i<n ; i++){
        if (v[i]>max) max=v[i];
    }

    cout<<max;

}







