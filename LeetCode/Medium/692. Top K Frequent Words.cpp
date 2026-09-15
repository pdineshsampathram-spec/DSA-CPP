```cpp
/*
    LeetCode 692 - Top K Frequent Words

    Approach:
    1. Count the frequency of each word using an unordered_map.
    2. Store {frequency, word} pairs in a vector.
    3. Sort the vector using:
       - Higher frequency first.
       - Lexicographically smaller word first when frequencies are equal.
    4. Return the first k words.

    Time Complexity:
        O(n + u log u)
        where n = number of words
              u = number of unique words

    Space Complexity:
        O(u)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {

        unordered_map<string, int> frequency;

        // Count frequency of each word
        for (auto word : words) {
            frequency[word]++;
        }

        vector<pair<int, string>> elements;

        // Store {frequency, word}
        for (auto [word, count] : frequency) {
            elements.push_back({count, word});
        }

        // Sort by frequency descending.
        // If frequencies are equal, sort words lexicographically ascending.
        sort(elements.begin(), elements.end(),
             [](const auto& a, const auto& b) {

                 if (a.first != b.first)
                     return a.first > b.first;

                 return a.second < b.second;
             });

        vector<string> answer;

        // Take the top k frequent words
        for (int i = 0; i < k; i++) {
            answer.push_back(elements[i].second);
        }

        return answer;
    }
};
```
