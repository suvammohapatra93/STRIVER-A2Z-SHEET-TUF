
// LeetCode -> 509 -> Fibonacci Number

#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n == 0)
        return 0; // Base case for n = 0
    if (n == 1)
        return 1; // Base case for n = 1

    int prev1 = 0; // Represents F(0)
    int prev2 = 1; // Represents F(1)

    for (int i = 2; i <= n; ++i)
    {
        int curr = prev1 + prev2; // Compute F(i)
        prev1 = prev2;            // Update F(i-2) to F(i-1)
        prev2 = curr;             // Update F(i-1) to F(i)
    }

    return prev2; // F(n) is stored in prev2
}

int main()
{
    cout << "Enter the value of n: " << "\n";
    int n;
    cin >> n;

    cout << fib(n) << "\n";
    return 0;
}