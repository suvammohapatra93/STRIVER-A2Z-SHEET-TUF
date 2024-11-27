
// GFG: Print n to 1

#include <bits/stdc++.h>

using namespace std;

void printNos1_To_N(int n)
{
    // base case
    if (n <= 0)
        return;

    // recursive call
    printNos1_To_N(n - 1);

    cout << n << " ";
}

void printNosN_To_1(int n)
{
    // base case
    if (n <= 0)
        return;

    cout << n << " ";

    // recursive call
    printNosN_To_1(n - 1);
}

int main()
{
    cout << "Enter the value of n: " << "\n";
    int n;
    cin >> n;

    printNos1_To_N(n);
    printNosN_To_1(n);
}

//! Time Complexity = O(N)
//! Space Complexity = O(N)