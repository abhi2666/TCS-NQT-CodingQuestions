#include <bits/stdc++.h>
using namespace std;
int main()
{
    string res = "bbbaaabababaaaa";
    int l = 5; // check string of size 3
    int mx = INT_MIN, curr = 0, cnt = 0;
    for(auto ch : res){
        if(ch=='a'){
            curr++;
        }
        cnt++;
        if(cnt==l){
            mx = max(mx, curr);
            cnt = 0;
            curr = 0;
        }
    }
    cout<<mx<<endl;
    
    return 0;
}