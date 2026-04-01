/*
🔹 Approach: Brute Force

Check all pairs (i, j) where j > i.
If nums[i] + nums[j] == target, return indices.

⏱ Time: O(n^2)
💾 Space: O(1)

📌 Simple but not optimal (use hashmap for O(n)).
*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v(2,0);
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int sum = nums[i] + nums[j];
                if (sum == target) {
                    v[0] = i;
                    v[1] = j;
                    return v;
                }
            }
        }
        return {-1,-1};
    }
};
