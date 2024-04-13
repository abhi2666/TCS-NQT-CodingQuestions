#include <iostream>
using namespace std;

int solve(int n, int r)
{
    int sum = 0;
    while (true)
    {
        while (n > 0)
        {
            int dig = n % 10;
            sum += dig;
            n /= 10;
        }
        string temp = to_string(sum);
        if (temp.size() == 1)
        {
            // got the single digit number
            return sum;
        }
        n = sum * r;
        sum = 0;
    }
    return -1;
}

int main()
{
    int n = 1234, r = 2; // continue till you get single digit
    if (r == 0)
        cout << 0 << endl;
    else
        cout << solve(n, r) << endl;
    return 0;
}