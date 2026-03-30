/*
Brute Force:
- Check all subarrays using two loops
- Maintain running sum and count if sum == k

Time: O(n^2)
Space: O(1)

Can be optimized using prefix sum + hashmap
*/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      int sum=0;
      int count=0;
      for(int i=0;i<nums.size();i++){
        sum=0;
        for(int j=i;j<nums.size();j++){
            sum=sum+nums[j];
            if(sum==k){
                count++;
            }
        }
      } 
      return count; 
    }
};
