#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a = {0, 1, 0, 1, 1};
    // count pairs where 0 comes before 1
    int n = a.size();
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(a[i]==1) continue; //reach a zero first
        for(int j = i+1; j < n; j++){
            if(a[j]==1) ans++;
        }
    }

    cout<<ans<<endl;
    return 0;
}