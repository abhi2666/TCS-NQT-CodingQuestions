#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int a[] = {4,5,0,1,9,0,5,0};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int>ans;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i]!=0) ans.push_back(a[i]);
        else cnt++;
    }
    while(cnt--) ans.push_back(0);
    for(auto ele : ans) {
        cout<<ele<<" ";
    }
    
    return 0;
}
