
//GFG

#include <bits/stdc++.h>
using namespace std;

vector<long long> factorialNumbers(long long n)
{
    vector<long long> result; // To store the factorial numbers
    long long fact = 1;       // Start with the first factorial (1!)
    long long i = 1;          // Counter for factorial calculation

    while (fact <= n)
    {
        result.push_back(fact); // Add the current factorial to the result
        i++;                    // Move to the next number
        fact *= i;              // Compute the next factorial
    }

    return result; // Return the list of factorial numbers
}

int main()
{
    cout << "Enter the value of n : " << "\n";
    long long n;
    cin >> n;
    vector<long long> output = factorialNumbers(n);

    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << "\n";
    }

    return 0;
}

//! Time Complexity = O(n)
//! Space Complexity = O(n)