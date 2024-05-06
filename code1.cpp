// find elements that are present more than n/3 times
#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &nums)
{
    int n = nums.size();
    map<int, int>mp;
    for(auto it : nums) mp[it]++;
    vector<int>ans;
    int target = floor(n/3);
    cout<<target<<endl;
    for(auto it : mp){
        if(it.second > target) ans.push_back(it.first);
    }

    return ans;
}
int main()
{
    vector<int> nums = {3, 2, 3};

    vector<int> ans = solve(nums);
    for(auto ele : ans) cout<<ele<<" ";
    return 0;
}
