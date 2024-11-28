
// GFG

#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr)
{
    int n = arr.size();
    functionForReversing(arr, 0, n - 1);
}

void functionForReversing(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        swap(arr[start], arr[end]);
        functionForReversing(arr, start + 1, end - 1);
    }
}

int main()
{
    cout << "Enter the value of n: " << endl;
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << "Array is empty!" << endl;
        return 0;
    }
    vector<int> arr(n);
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverseArray(arr);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

//! Time Complexity = O(N)
//! Space Complexity = O(N)