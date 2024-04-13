#include <bits/stdc++.h>
using namespace std;

string DecimalToBinary(int n){
    string res = "";
    while(n > 0){
        int dig = n%2;
        res += (dig+'0');
        n/=2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int convertDecimal(string binary){
    int ans = 0, power = 1;
    for(int i = binary.size()-1; i >= 0; i--){
        int temp = binary[i]-'0';
        ans += (temp * power);
        power *= 2;
    }
    return ans;
}
int main()
{
    int n = 7;
    string binary = DecimalToBinary(n);
    cout<<"binary "<<binary<<endl;
    //toggle 
    for(auto &ch : binary){
        if(ch=='0') ch = '1';
        else ch = '0';
    }
    cout<<"Toggled Binary "<<binary<<endl;
    int ans = convertDecimal(binary);
    cout<<ans<<endl;
    return 0;
}