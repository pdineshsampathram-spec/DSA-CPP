/*
    LeetCode 557 - Reverse Words in a String III

    Problem:
    Reverse the characters in each word while preserving the original
    word order and spaces.

    Example:
    Input:
        "Let's take LeetCode contest"

    Output:
        "s'teL ekat edoCteeL tsetnoc"

    ------------------------------------------------------------
    Approach 1: Personal Approach
    ------------------------------------------------------------
    - Use stringstream to extract each word.
    - Reverse each word using the two-pointer technique.
    - Store the reversed words in a vector.
    - Construct the final answer from the vector.

    Time Complexity: O(n)
    Auxiliary Space: O(n)

    ------------------------------------------------------------
    Approach 2: Optimized / In-Place Approach
    ------------------------------------------------------------
    - Traverse the original string.
    - Identify each word using spaces.
    - Reverse each word directly inside the original string.
    - No vector or stringstream is required.

    Time Complexity: O(n)
    Auxiliary Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    // ----------------------------------------------------------
    // Personal Approach
    // ----------------------------------------------------------
    string reverseWordsPersonal(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;

        while (ss >> word) {
            int left = 0;
            int right = word.size() - 1;

            while (left < right) {
                swap(word[left], word[right]);
                left++;
                right--;
            }

            words.push_back(word);
        }

        string answer;

        for (int i = 0; i < words.size(); i++) {
            if (i > 0)
                answer += ' ';

            answer += words[i];
        }

        return answer;
    }

    // ----------------------------------------------------------
    // Optimized Approach
    // ----------------------------------------------------------
    string reverseWords(string s) {
        int wordStart = 0;

        for (int i = 0; i < s.size(); i++) {

            // End of current word
            if (s[i] == ' ') {
                reverse(s.begin() + wordStart, s.begin() + i);
                wordStart = i + 1;
            }
        }

        // Reverse the last word
        reverse(s.begin() + wordStart, s.end());

        return s;
    }
};
