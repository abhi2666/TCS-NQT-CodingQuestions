#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>entry = {7, 0, 5, 1, 3};
    vector<int>leave = {1, 2, 1, 3, 4};
    int mx = 0, curr = 0;
    for(int i = 0; i < entry.size(); i++){
        curr += (entry[i] - leave[i]);
        mx = max(mx, curr);
    }
    cout<<mx<<endl;
    
    return 0;
}