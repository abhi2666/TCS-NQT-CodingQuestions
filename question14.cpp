// to execute - ctrl + D and then press ENTER
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a;
    int val = 0;
    while(cin>>val){
        if(val >= 0){
            a.push_back(val);
        }
        else{
            cout<<"wrong Input"<<endl;
            break;
        }
    }
    // vector<int>a = {2, 2, 4};
    // change any duplicate value to some other value by incrementing it
    unordered_set<int>dup;
    int totalSum = 0;
    for(auto ele : a){
        if(dup.find(ele)!=dup.end()){
            // search for the nearset positive value
            int tempVal = ele+1;
            while(dup.find(tempVal)!=dup.end()){
                tempVal++;
            }
            totalSum += tempVal;
            dup.insert(tempVal);
        }
        else{
            //already unique
            totalSum+= ele;
            dup.insert(ele);
        }
    }
    cout<<"total sum : "<<totalSum<<endl;
    return 0;
}