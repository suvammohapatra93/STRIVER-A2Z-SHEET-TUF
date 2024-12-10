
// LeetCode 189:  -> Rotate Array -> https://leetcode.com/problems/rotate-array/

#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n; // Handle cases where k > n

    // Step 1: Reverse the entire array
    reverse(nums.begin(), nums.end());

    // Step 2: Reverse the first k elements
    reverse(nums.begin(), nums.begin() + k);

    // Step 3: Reverse the remaining n - k elements
    reverse(nums.begin() + k, nums.end());
}

int main()
{
    int n;
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int k;
    cin >> k;
    rotate(array, k);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}

//! Time Complexity = O(N)
//! Space Complexity = O(1)