// now I am going to try the optimised approach that is of two pointers

#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& v);

int main()
{
    vector<int> height={1,8,6,2,5,4,8,3,7};

    int mostWater=maxArea(height);
    cout<<mostWater<<endl;
}

int maxArea(vector<int>& height){
    int left_ptr=0 , right_ptr=height.size()-1;

    int mostWater=0;
    while (left_ptr<right_ptr){
        int l=right_ptr-left_ptr;
        int h=min(height[right_ptr] , height[left_ptr]);

        int currWater=l * h;

        mostWater=max(currWater , mostWater);

        if (height[left_ptr] > height[right_ptr]) right_ptr--;
        else left_ptr++;
    }
    return mostWater;
}