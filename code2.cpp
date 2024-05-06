#include <bits/stdc++.h>
using namespace std;

void arraySort(int nums[], int n)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid < high)
    {
        if (nums[mid] == 5)
        {
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }
        else if (nums[mid] == 7)
        {
            swap(nums[mid], nums[high]);
            high--;
        }
        else
            mid++;
    }
}
int main()
{
    int nums[] = {5, 6, 5, 7, 5, 6, 5, 7, 6, 5, 5};
    int n = sizeof(nums) / sizeof(nums[0]);

    arraySort(nums, n);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}