#include <iostream>
using namespace std;
int main()
{
    // max subdays possible in given days
    int ans = 1, cnt = 0;
    int n = 20;
    while(n--){
        cnt++;
        if(cnt==7){
            ans++;
            cnt = 0;
        }
    }
    cout<<ans<<endl;
    return 0;
}