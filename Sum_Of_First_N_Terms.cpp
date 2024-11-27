
// GFG

#include <bits/stdc++.h>

using namespace std;

long long sumOfSeries(long long n)
{
    // base case
    if (n == 0)
        return 0;

    return (n * n * n) + sumOfSeries(n - 1);
}

int main()
{
    cout << "Enter the value of n: " << "\n";
    long long n;
    cin >> n;

    cout << sumOfSeries(n) << "\n";
    return 0;
}

//! Time Complexity = O(N)
//! Space Complexity = O(N)