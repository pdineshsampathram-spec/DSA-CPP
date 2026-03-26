/*
🔹 Problem: Minimum Size Subarray Sum (LeetCode 209)

🔹 Approach (Optimized - Sliding Window):
- Use two pointers (left and right) to maintain a window.
- Expand the window by moving right and adding elements to the sum.
- Once the sum becomes ≥ target:
    → Update the minimum length.
    → Shrink the window from the left to find smaller valid subarrays.
- Repeat until the entire array is processed.

🔹 Key Insight:
- Since all elements are positive, increasing the window increases sum,
  and shrinking decreases it — enabling an efficient sliding window approach.

🔹 Time Complexity: O(n)
- Each element is visited at most twice.

🔹 Space Complexity: O(1)

🔹 Outcome:
- Efficiently finds the minimum length subarray with sum ≥ target.
- Returns 0 if no such subarray exists.

*/



/*
🔹 Problem: Minimum Size Subarray Sum (LeetCode 209)

🔹 Approach (Brute Force - Current Version):
- Iterate through all possible subarrays using nested loops.
- For each starting index, keep adding elements until the sum becomes ≥ target.
- Track the minimum length of such subarrays.
- If no valid subarray exists, return 0.

🔹 Key Observations:
- We are looking for subarrays with sum ≥ target (not exactly equal).
- This approach checks all possibilities, leading to high time complexity.

🔹 Time Complexity: O(n²)
🔹 Space Complexity: O(1)

🔹 Note:
- This is a brute-force / intermediate approach.
- Can be optimized to O(n) using Sliding Window technique (to be implemented later).

*/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        if (find(nums.begin(), nums.end(), target) != nums.end()) {
            return 1;
        }
        int sum = 0, m = INT_MAX, count = 0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        if(sum<target){
            return 0;
        }
        for (int i = 0; i < nums.size(); i++) {
            sum=nums[i];
            int count = 1;
            for (int j = i+1; j < nums.size(); j++) {
                if (sum < target) {
                    sum = sum + nums[j];
                    count++;
                }
                if (sum >= target) {
                    sum = sum - nums[j-1];
                    m = min(m, count);
                }
            }
        }
        return m;
    }
};



