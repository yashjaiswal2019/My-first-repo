// I am writing bruteforce approach first

#include <iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height);

int main()
{
    vector<int> height={1,8,6,2,5,4,8,3,7};

    int mostWater=maxArea(height);
    cout<<mostWater<<endl;
}

int maxArea(vector<int> &height)
{
    // lets do the bruteforce approach first
    // we check every posible subarray, use two loops one for start and one for end
    // width will be difference between endpt and start
    // height will be low of min of both heights
    // and check product

    int mostWater = 0;
    for (int st = 0, n = height.size(); st < n; st++)
    {
        for (int endpt = st; endpt < n; endpt++)
        {
            int h = min(height[st], height[endpt]);
            int l = endpt - st;

            int currWater = h * l;

            mostWater = max(mostWater, currWater);
        }
    }
    return mostWater;
}