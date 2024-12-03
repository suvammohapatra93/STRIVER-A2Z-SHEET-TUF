
// GFG -> https://www.geeksforgeeks.org/problems/selection-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=selection-sort

#include <bits/stdc++.h>
using namespace std;

void ascendingOrder(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[mini] > arr[j])
            {
                mini = j;
            }
        }

        // swap
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }

    cout << "After sorting in ascending order -> " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void descendingOrder(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[mini] < arr[j])
            {
                // swap
                int temp = arr[mini];
                arr[mini] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "After sorting in descending order -> " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    cout << "Enter the value of n: " << "\n";
    int n;
    cin >> n;

    cout << "Enter the value of array elements: " << "\n";
    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    ascendingOrder(array);
    descendingOrder(array);

    return 0;
}

//! Time Complexity = O(N^2)
//! Space Complexity = O(1)