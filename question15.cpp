// Good question using minheap
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a = {12, 2, 2, 5};
    // use a priority queue - min heap to store the elements
    priority_queue<int, vector<int>, greater<int>>pq; //min heap- smallest element at top
    for(auto ele : a) pq.push(ele);
    int cost = 0;
    while(pq.size() > 1){
        // get the top 2 elements 
        int a = pq.top();
        pq.pop();
        a += pq.top();
        pq.pop();
        //now push the new element in the array
        cost += a;
        pq.push(a);
    }

    cout<<cost<<endl;

    return 0;
}