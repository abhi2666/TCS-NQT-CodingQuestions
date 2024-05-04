#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "4523E56F58G";
    // use stack to remove occ of EF, 56 or G
    stack<char>st;
    //processing 
    for(auto ch : s){
        if(ch=='G') continue; // do nothing 
        else if(ch=='F'){
            int val = st.top();
            if(st.size() > 0 && val=='E'){
                // means remove that char
                st.pop();
            }
            else st.push(ch);
        }
        else if(ch=='6'){
            int val = st.top();
            if(st.size() > 0 && val=='5'){
                st.pop();
            } 
            else st.push(ch);
        }
        else{
            // push any other char directly
            st.push(ch);
        }
    }

    string ans = "";
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;
    return 0;
}