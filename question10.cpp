#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {2,5,1,6,8};
    int d = 3, x = 300;
    int even = 0, odd = 0;
    for (auto ele : a)
    {
        if (ele % 2 == 0)
            even++;
        else
            odd++;
    }
    if (d % 2 == 0)
        cout << odd * x << endl;
    else
        cout << even * x << endl;
    return 0;
}