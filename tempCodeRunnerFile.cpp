#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {-4, -3, -1, 0, 2, 10};
    int n = arr.size();

    vector<int> ans(n);
    int left = 0, right = n - 1;
    int pos = n - 1;

    while (left <= right)
    {
        if (abs(arr[left]) > abs(arr[right]))
        {
            ans[pos] = arr[left] * arr[left];
            left++;
        }
        else
        {
            ans[pos] = arr[right] * arr[right];
            right--;
        }
        pos--;
    }

    for (int x : ans)
        cout << x << " ";
}