```cpp
/*
    LeetCode 438 - Find All Anagrams in a String

    Approach:
    - Count the frequency of each character in p.
    - Maintain a sliding window of size p.length() in s.
    - Add the character entering the window.
    - Remove the character leaving the window.
    - If both frequency arrays are equal, the current window
      is an anagram of p.

    Time Complexity:
        O(n)
        Since the frequency arrays contain only 26 characters.

    Space Complexity:
        O(1)
        Only two arrays of size 26 are used.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> answer;

        if (s.size() < p.size())
            return answer;

        int windowSize = p.size();

        vector<int> patternFrequency(26, 0);
        vector<int> windowFrequency(26, 0);

        // Count frequency of characters in p
        for (char c : p) {
            patternFrequency[c - 'a']++;
        }

        // Create the first window
        for (int i = 0; i < windowSize; i++) {
            windowFrequency[s[i] - 'a']++;
        }

        // Check the first window
        if (patternFrequency == windowFrequency) {
            answer.push_back(0);
        }

        // Slide the window
        for (int i = windowSize; i < s.size(); i++) {

            // Add the new character
            windowFrequency[s[i] - 'a']++;

            // Remove the character leaving the window
            windowFrequency[s[i - windowSize] - 'a']--;

            // Check if current window is an anagram
            if (windowFrequency == patternFrequency) {
                answer.push_back(i - windowSize + 1);
            }
        }

        return answer;
    }
};
```
