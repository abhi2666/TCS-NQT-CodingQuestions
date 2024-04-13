#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a = {7, 4, 8, 2, 9};
    int mx = INT_MIN, cnt = 0;
    for(auto ele : a){
        if(ele > mx){
            cnt++;
            mx = ele;
        }
    }
    cout<<cnt<<endl;
    
    return 0;
}
