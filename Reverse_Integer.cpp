
#include <bits/stdc++.h>

using namespace std;

int reverse(int x)
{
    int newNum = 0;

    while (x != 0)
    {
        int lastDigit = x % 10;

        // Check for overflow/underflow before updating newNum
        if (newNum > INT_MAX / 10 || (newNum == INT_MAX / 10 && lastDigit > 7))
            return 0;
        if (newNum < INT_MIN / 10 || (newNum == INT_MIN / 10 && lastDigit < -8))
            return 0;

        newNum = newNum * 10 + lastDigit;
        x /= 10;
    }

    return newNum;
}

int main()
{
    cout << "Enter the value of x" << "\n";
    int x;
    cin >> x;

    cout << reverse(x) << "\n";
    return 0;
}

//! Time Complexity = O(log10(x))
//! Space Complexity = O(1)