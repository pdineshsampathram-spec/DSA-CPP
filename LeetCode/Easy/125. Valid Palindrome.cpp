```cpp
/*
    LeetCode 125 - Valid Palindrome

    Approach:
    - Use two pointers, one starting from the left and one from the right.
    - Skip characters that are not alphanumeric.
    - Compare characters after converting them to lowercase.
    - If any pair doesn't match, the string is not a palindrome.

    Example:
        Input:  "A man, a plan, a canal: Panama"
        Output: true

    Time Complexity:
        O(n)

    Space Complexity:
        O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {

        int left = 0;
        int right = s.size() - 1;

        while (left < right) {

            // Skip non-alphanumeric characters from the left
            while (left < right && !isalnum(s[left])) {
                left++;
            }

            // Skip non-alphanumeric characters from the right
            while (left < right && !isalnum(s[right])) {
                right--;
            }

            // Compare characters ignoring case
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
```
