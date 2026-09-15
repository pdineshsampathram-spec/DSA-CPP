```cpp
/*
    LeetCode 347 - Top K Frequent Elements

    Approach:
    1. Use an unordered_map to count the frequency of each element.
    2. Store {frequency, element} pairs in a vector.
    3. Sort the vector in descending order of frequency.
    4. Take the first k elements.

    Time Complexity:
        O(n + u log u)
        where n = number of elements
              u = number of unique elements

    Space Complexity:
        O(u)
        where u = number of unique elements
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> frequency;
        vector<pair<int, int>> elements;
        vector<int> answer;

        // Count frequency of each element
        for (int num : nums) {
            frequency[num]++;
        }

        // Store {frequency, element}
        for (auto [num, count] : frequency) {
            elements.push_back({count, num});
        }

        // Sort by frequency in descending order
        sort(elements.begin(), elements.end(), greater<pair<int, int>>());

        // Get the top k frequent elements
        for (int i = 0; i < k; i++) {
            answer.push_back(elements[i].second);
        }

        return answer;
    }
};
```
