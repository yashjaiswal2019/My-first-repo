#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> colors={1,1,1,6,1,1,1};
    // lets use two pointer approach
    int left=0 , right = colors.size()-1;
    while (left<right){
        if (colors[left]==colors[right]) left++;
        else {
            cout<< right - left <<endl;
            return 0;
        }
    }
    
}

// this answer is incorrect for testCase [6,6,6,6,6,6,6,6,6,19,19,6,6]