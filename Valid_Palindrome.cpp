
// LeetCode -> 125 -> valid palindrome

#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s)
{
    // two pointers approach
    int left = 0;
    int right = s.size() - 1;

    while (left < right)
    {
        // Move left pointer to the next alphanumeric character
        while (left < right && !isalnum(s[left]))
        {
            left++;
        }
        // Move right pointer to the previous alphanumeric character
        while (left < right && !isalnum(s[right]))
        {
            right--;
        }

        // Compare characters, ignoring case
        if (tolower(s[left]) != tolower(s[right]))
        {
            return false; // Not a palindrome
        }

        left++;
        right--;
    }

    return true; // It's a palindrome
}

int main()
{
    cout << "Enter the value of s: " << "\n";
    string s;
    cin >> s;
    cout << isPalindrome(s) << "\n"; // 0->false 1->true

    return 0;
}

//! Time Complexity = O(N)
//! Space Complexity = O(1)