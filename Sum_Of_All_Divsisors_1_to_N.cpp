
#include <bits/stdc++.h>

using namespace std;
int sumOfDivisors(int n)
{
    int sumi = 0;
    int sumf = 0;
    for (int i = 1; i <= n; i++)
    {
        sumi = 0; // Reset sumi for the new value of i
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {                    // Check if j is a divisor of i
                sumi = sumi + j; // Add j (the divisor) to sumi
            }
        }
        sumf = sumf + sumi; // Add the sum of divisors of i to sumf
    }

    return sumf;
}

int main()
{
    cout << "Enter the value of n: " << "\n";
    int n;
    cin >> n;

    cout << sumOfDivisors(n) << "\n";

    return 0;
}

//! Time Complexity = O(n^2)
//! Space Complexity = O(1)