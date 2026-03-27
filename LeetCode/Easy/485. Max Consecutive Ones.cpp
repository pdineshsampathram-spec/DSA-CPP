/*
Problem: Find Max Consecutive Ones
Approach:
- Traverse the array and count consecutive 1s.
- Reset count to 0 whenever a 0 is encountered.
- Keep track of the maximum count using 'ans'.
- Final check ensures trailing 1s are considered.

Time Complexity: O(n)
Space Complexity: O(1)

Key Insight:
This is a basic sliding/counting pattern where we track a streak and update the maximum.
*/


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
                ans = max(ans, count);
            } else {

                count = 0;
            }
        }
        ans = max(ans, count);
        return ans;
    }
};
