#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    string res = "";
    while (n >= 1)
    {
        if (n % 2 == 1)
            res = res + '1';
        else
            res = res + '0';
        n = n / 2;
    }
    reverse(res.begin(), res.end());
    cout << res;
}
