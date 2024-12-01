
// GFG : Frequencies of limited range array elements

#include <bits/stdc++.h>
using namespace std;

vector<int> frequencyCount(vector<int> &arr)
{
    int n = arr.size();

    // Precompute frequencies using a hash map
    unordered_map<int, int> freqMap;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 1 && arr[i] <= n)
        {
            freqMap[arr[i]]++;
        }
    }

    // Prepare the result vector
    vector<int> result(n, 0);
    for (int i = 1; i <= n; i++)
    {
        result[i - 1] = freqMap[i];
    }

    return result;
}

int main()
{
    cout << "Enter the size of the elements of the array : " << "\n";
    int n;
    cin >> n;

    cout << "Enter the elements of the array: " << "\n";
    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    vector<int> result = frequencyCount(array);
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}

//! Time Complexity = O(N)
//! Space Complexity = O(N)