
// GFG -> BUBBLE SORT

#include <bits/stdc++.h>
using namespace std;

void bubbleSortHelper(vector<int> &arr, int n)
{
    // Base case: If size is 1, array is already sorted
    if (n == 1)
        return;

    // Perform one pass of Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            // Swap if elements are in the wrong order
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    // Recur for the remaining array (size n-1)
    bubbleSortHelper(arr, n - 1);
}

void bubbleSort(vector<int> &arr)
{
    bubbleSortHelper(arr, arr.size());
}

int main()
{
    cout << "Enter the number of elements that you want to enter: " << "\n";
    int n;
    cin >> n;

    cout << "Enter the elements of the array: " << "\n";
    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    bubbleSort(array);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}

//! Time Complexity = O(N^2)
//! Space Complexity = O(N)