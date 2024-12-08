
// GFG -> QUICK SORT -> https://www.geeksforgeeks.org/problems/quick-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=quick-sort

#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    // Function to sort an array using quick sort algorithm.
    void quickSort(vector<int> &arr, int low, int high)
    {
        qs(arr, low, high);
    }

private:
    int partition(vector<int> &arr, int low, int high)
    {
        // Choosing the first element as pivot
        int pivot = arr[low];
        int i = low;
        int j = high;

        while (i < j)
        {
            // Move i forward until an element greater than pivot is found
            while (arr[i] <= pivot && i < high)
            {
                i++;
            }
            // Move j backward until an element smaller than or equal to pivot is found
            while (arr[j] > pivot && j > low)
            {
                j--;
            }
            // Swap elements at i and j if i < j
            if (i < j)
            {
                swap(arr[i], arr[j]);
            }
        }
        // Place pivot at its correct position
        swap(arr[low], arr[j]);
        return j;
    }

    void qs(vector<int> &arr, int low, int high)
    {
        if (low < high)
        {
            int pIndex = partition(arr, low, high); // Partition the array
            qs(arr, low, pIndex - 1);               // Sort the left subarray
            qs(arr, pIndex + 1, high);              // Sort the right subarray
        }
    }
};

int main()
{
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();

    Solution sol;
    sol.quickSort(arr, 0, n - 1);

    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}

//! Time Complexity = O(n log n)
//! Space Complexity = O(1)