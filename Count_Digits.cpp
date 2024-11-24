
// GFG -> COUNT DIDGITS

#include <bits/stdc++.h>

using namespace std;

int evenlyDivides(int n)
{
    int count = 0;
    int orig_n = n;
    while (n > 0)
    {
        int dig = n % 10;
        n = n / 10;
        if (dig > 0 && orig_n % dig == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    cout << "Enter the value of n: " << "\n";
    int n;
    cin >> n;
    cout << evenlyDivides(n) << "\n";
    return 0;
}

//! Time Complexity = O(d)
//! Space Complexity = O(1)