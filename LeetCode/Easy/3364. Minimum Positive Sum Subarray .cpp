/*
Approach:
- Use brute force to check all possible subarrays.
- For each starting index i, expand the subarray till the end.
- Keep adding elements to maintain the running sum.
- For each subarray, calculate its length (j - i + 1).
- If the length is within [l, r] and the sum is positive,
  update the minimum positive sum.

Time Complexity:
- O(n^2), since we check all possible subarrays.

Space Complexity:
- O(1), no extra space used.

Note:
- This is a straightforward brute-force solution.
- Can be optimized further using prefix sum + ordered set.
*/

class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum=sum+nums[j];
                int len=j-i+1;
                if(len>=l && len<=r && sum>0){
                    ans=min(ans,sum);
                }
            }
        }
        return (ans==INT_MAX)?-1:ans;
    }
};
