
#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    int newNum = 0;
    while (x != 0)
    {
        int lastDigit = x % 10;

        if (newNum > INT_MAX / 10 || newNum == INT_MAX / 10 && lastDigit > 7)
        {
            return 0;
        }

        if (newNum < INT_MIN / 10 || newNum == INT_MIN / 10 && lastDigit < -8)
        {
            return 0;
        }

        newNum = newNum * 10 + lastDigit;
        x /= 10;
    }

    return newNum;
}

bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    int revNum = reverse(x);
    return (x == revNum);
}

int main()
{
    cout << "Enter the value of x: " << "\n";
    int x;
    cin >> x;

    cout << isPalindrome(x) << "\n";
}

//! Time Complexity = O(log10(x))
//! Space Complexity = O(1)