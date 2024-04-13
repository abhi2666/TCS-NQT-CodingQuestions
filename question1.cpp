#include <iostream>
#include <math.h>
using namespace std;
/*
To convert from any base to decimal
ex - base 17 and num  - 23FG

approach - 2 * 17^3 + 3 * 17^2 + ...


NOTE : DO NOT USE POW FUNCTION BECAUSE IT WILL GIVE WRONG ANSWER FOR SOME TEST CASES
*/
int solve(string num, int base)
{
    int ans = 0, power = 1;
    for (int i = num.size() - 1; i >= 0; i--)
    {
        int val;
        if (num[i] >= '0' && num[i] <= '9')
        {
            val = num[i] - '0';
        }
        else
        {
            // it is an alphabet
            val = 10 + (num[i] - 'A'); // till G - 16
        }
        ans += val * power;
        power*=base;
    }
    return ans;
}

int main(){
    string num = "23GF";
    int decimal = solve(num, 17);
    cout<<decimal<<endl;
    return 0;
}

// Very Short code using stoi to convert from any base to decimal
// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
// 	string n = "23GF";
// 	int b = 17;
// 	int result = stoi(n, nullptr, b);
// 	cout << result << endl;
// 	return 0;
// }
