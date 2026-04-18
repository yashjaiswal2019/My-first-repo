// now I am going to try the optimised approach that is of two pointers

// the last ans worked now lets try to optimise it 

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

        if (mostWater < currWater) mostWater = currWater;

        if (height[left_ptr]<(l*h)/l-1){        // tried to optimise the solution if next height dont satisfy this condition
            left_ptr++;                         // then resulting container will contain less water than current mostWater 
            continue;                           // so we dont have to check for those and skip those heughts
        }
        if (height[right_ptr]<(l*h)/l-1){
            right_ptr++;
            continue;
        }

        if (height[left_ptr] > height[right_ptr]) right_ptr--;
        else left_ptr++;
    }
    return mostWater;
}