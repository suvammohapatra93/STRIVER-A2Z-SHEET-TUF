
//LeetCode : 1752 : Check if Arrray is sorted and rotated -> https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums){
    int n = nums.size();
    int countBreaks = 0;

    for(int i=0;i<n;i++){
        // Compare current element with the next
        if(nums[i] > nums[(i+1)%n]){
            countBreaks++;
        }
    }

    //checking all elements are same or different
    bool allEqual = true;
    for(int i=1;i<n;i++){
        if(nums[i] != nums[0]){
            allEqual = false;
            break;
        }
    }

    //If all elements are identical the elements are sorted
    if(allEqual){
        return true;
    }

    return (countBreaks == 1);
}


int main(){
    int n;
    cin >> n;

    vector<int> array(n);
    for(int i=0;i<n;i++){
        cin >> array[i];
    }

    cout << check(array) << endl;

    return 0;
}

// 0 -> false
// 1 -> true

//! Time Complexity = O(N)
//! Space Complexity = O(1)