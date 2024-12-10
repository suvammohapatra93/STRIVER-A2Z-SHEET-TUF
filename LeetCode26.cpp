
//LeetCode: 26: Remove duplicates from sorted array :- https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr){
    int i=0;
    int n = arr.size();

    if(n == 0) return 0; //Empty array case

    for(int j=1;j<n;j++){
        if(arr[i] != arr[j]){   //for unique elements
            i++;
            arr[i] = arr[j];
        }
    }

    return i+1;
}

int main(){
    int n;
    cin >> n;

    vector<int> array(n);
    for(int i=0;i<n;i++){
        cin >> array[i];
    }

    cout << removeDuplicates(array) << endl;

    return 0;
}

//! Time Complexity = O(N)
//! Space Complexity = O(1)