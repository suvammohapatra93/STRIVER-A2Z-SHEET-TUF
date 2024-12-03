
// GFG -> https://www.geeksforgeeks.org/problems/insertion-sort/0?category%5B%5D=Algorithms&page=1&query=category%5B%5DAlgorithmspage1&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=insertion-sort

#include <bits/stdc++.h>
using namespace std;

void ascendingOrder(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int curr = i;
        while (curr > 0 && arr[curr - 1] > arr[curr])
        {
            // swap
            int temp = arr[curr - 1];
            arr[curr - 1] = arr[curr];
            arr[curr] = temp;

            curr--;
        }
    }

    cout << "After Sorting by insertion sort -> " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void descendingOrder(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int curr = i;
        while (curr > 0 && arr[curr - 1] < arr[curr])
        {
            // swap
            int temp = arr[curr - 1];
            arr[curr - 1] = arr[curr];
            arr[curr] = temp;

            curr--;
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
    cout << "Enter the no of elements of the array : ";
    int n;
    cin >> n;

    cout << "Enter the elements of the array : " << "\n";
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