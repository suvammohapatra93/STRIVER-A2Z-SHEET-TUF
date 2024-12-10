
// GFG -> SECOND LARGEST -> https://www.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest

#include <bits/stdc++.h>
using namespace std;

int getSecondLargest(vector<int> array)
{
    int largest = -1;
    int secondLargest = -1;

    for (int num : array)
    {
        if (num > largest)
        {
            secondLargest = largest;
            largest = num;
        }
        else if (num > secondLargest && largest != num)
        {
            secondLargest = num;
        }
    }

    return secondLargest;
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

    cout << getSecondLargest(array) << "\n";

    return 0;
}

//! Time Complexity = O(N)
//! Space Complexity = O(1)