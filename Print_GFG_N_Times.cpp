
// GFG

#include <bits/stdc++.h>

using namespace std;

void printGfg(int N)
{
    // base case
    if (N == 0)
        return;

    cout << "GFG ";

    // recursive call
    printGfg(N - 1);
}

int main()
{
    cout << "Enter the value of N: " << "\n";
    int N;
    cin >> N;
    printGfg(N);

    return 0;
}

//! Time Complexity = O(N)
//! Space Complexity = O(N)