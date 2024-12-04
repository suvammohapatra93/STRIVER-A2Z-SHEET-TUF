
// GFG -> MERGE SORT -> https://www.geeksforgeeks.org/problems/merge-sort/1

#include <bits/stdc++.h>

using namespace std;

void mrg(vector<int> &arr, int low, int mid, int high)
{
    // temporary array
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergesort(vector<int> &array, int low, int high)
{
    // base case
    if (low >= high)
        return;

    int mid = (low + high) / 2;
    mergesort(array, low, mid);
    mergesort(array, mid + 1, high);
    mrg(array, low, mid, high);
}

int main()
{
    cout << "Enter the number of elements of the array: " << "\n";
    int n;
    cin >> n;

    cout << "Enter the elements of the array : " << "\n";
    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    mergesort(array, 0, n - 1);
    for (int it : array)
    {
        cout << it << " ";
    }

    return 0;
}

//! Time Complexity = O(N log N)
//! Space Complexity = O(N)  -> Due to extra temporary array