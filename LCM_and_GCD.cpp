
// GFG -> LCM AND GCD

#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    int gcdValue = gcd(a, b);
    return ((a * b) / gcdValue);
}

vector<int> lcmAndGcd(int a, int b)
{
    int gcdValue = gcd(a, b);
    int lcmValue = lcm(a, b);

    return {lcmValue, gcdValue};
}

int main()
{
    cout << "Enter the value of a: " << "\n";
    int a;
    cin >> a;

    cout << "Enter the value of b: " << "\n";
    int b;
    cin >> b;

    vector<int> gcdandlcmValue = lcmAndGcd(a, b);
    cout << "LCM: " << gcdandlcmValue[0] << ", GCD: " << gcdandlcmValue[1] << "\n";

    return 0;
}

//! Time Complexity = O(log(min(a,b)))  -> Euclid algorithm
//! Space Complexity = O(1)