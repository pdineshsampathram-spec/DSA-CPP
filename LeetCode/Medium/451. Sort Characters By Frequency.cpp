/*
    LeetCode 451 - Sort Characters By Frequency

    Approach:
    1. Count the frequency of every character.
    2. Store each character along with its frequency.
    3. Sort the pairs in descending order of frequency.
    4. Append each character according to its frequency.

    Time Complexity:
        O(n + 123 log 123)
        Since the character set is fixed, this is effectively O(n).

    Space Complexity:
        O(123)
        Since we store frequencies for 123 possible ASCII characters.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {

        // {frequency, character}
        vector<pair<int, char>> freq(123, {0, 0});

        // Count character frequencies
        for (char ch : s) {
            freq[ch] = {freq[ch].first + 1, ch};
        }

        // Sort by frequency in descending order
        sort(freq.begin(), freq.end(), greater<pair<int, char>>());

        string ans;

        // Build the result
        for (auto [count, ch] : freq) {
            if (count == 0)
                break;

            ans.append(count, ch);
        }

        return ans;
    }
};
