#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2,5,1,6,8,0};
    vector<int>colors = {0,1,0,0,0,1};
    int a = 0, b = 0;
    for(auto color : colors){
        if(color==0) a++;
        else b++;
    }
    int n = colors.size();
    if(n%2){
        if(abs(a-b)<=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{
        if(a==b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}