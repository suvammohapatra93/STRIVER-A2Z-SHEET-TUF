
//GFG -> LONGEST ELEMENT IN AN ARRAY -> https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-element-in-array


// We Can do the same by sorting it then returning the last index value but the lowest sorting complexity is = O(N log N) we can do the same by this:


#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr)
{
    int n = arr.size();
    int maxElement = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }

    return maxElement;
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

    cout << largest(array) << "\n";

    return 0;
}

//! Time Complexity = O(N)
//! Space Complexity = O(1)