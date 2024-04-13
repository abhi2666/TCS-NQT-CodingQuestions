#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a = {1,0,2,0,1,0,2};
    //sort this using dutch national flag algorithm
    int low = 0, mid = 0, high = a.size()-1;
    while(mid < a.size()){
        if(a[mid]==1){
            mid++;
        }
        else if(a[mid]==0){
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
        else{
            swap(a[mid], a[high]);
            mid++;
            high--;
        }
    }
    for(auto it : a){
        cout<<it<<" ";
    }
    return 0;
}
