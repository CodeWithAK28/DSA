// Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists an integer x such that n == 2x.

// Example 1:

// Input: n = 1
// Output: true
// Explanation: 20 = 1
// Example 2:

// Input: n = 16
// Output: true
// Explanation: 24 = 16

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // taking input from user
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // storing that number in another variable
    int num = n;
    bool ans = false;

    // we will check if that number is a multiple of two or not
    int temp = 1;
    while (temp < num)
    {
        temp = temp * 2;
    }
    // if the number is equal to the temp variable then it is a power of two
    if (temp == num)
        ans = true;

    if (ans == true)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    // cout << ans << endl;
}