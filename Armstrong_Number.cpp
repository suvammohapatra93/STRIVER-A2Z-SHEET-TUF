
// GFG -> Armstrong Number

#include <bits/stdc++.h>
using namespace std;

int valueCube(int n)
{
    int addValue = 0;

    while (n != 0)
    {
        int lastDigit = n % 10;
        int valuecube = (lastDigit * lastDigit * lastDigit);
        addValue += valuecube;
        n /= 10;
    }

    return addValue;
}

bool armstrongNumber(int n)
{
    int addValue = valueCube(n);
    int original = n;
    if (addValue == original)
    {
        return true;
    }

    return false;
}

int main()
{
    cout << "Enter the value of n: " << "\n";
    int n;
    cin >> n;

    cout << armstrongNumber(n) << "\n";
    // 1->true 0->false

    return 0;
}

//! Time Complexity = O(log10(n))
//! Space Complexity = O(1)