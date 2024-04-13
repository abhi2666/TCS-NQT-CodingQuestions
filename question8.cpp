#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    int res = 1;
    while(n > 0){
        res*=n;
        n--;
    }
    return res;
}
int main()
{
    int n = 5;
    cout<<fact(n-1)*2;
    return 0;
}