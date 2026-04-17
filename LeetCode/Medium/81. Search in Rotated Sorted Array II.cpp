/*
🔍 Binary Search in Rotated Sorted Array with Duplicates

* Use binary search to find target.
* If nums[l] == nums[mid] == nums[r], shrink range (l++, r--).
* Otherwise, identify sorted half and move accordingly.

⏱️ Time: O(log n) avg, O(n) worst (due to duplicates)
📦 Space: O(1)
*/
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while(l<=r){
            long long mid=l+(r-l)/2;
            if(nums[mid]==target){
                return true;
            }
            if(nums[l]==nums[mid] && nums[mid]==nums[r]){
                l++;
                r--;
                continue;
            }
            if(nums[l]<=nums[mid]){
                if(nums[l]<=target && nums[mid]>target){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else{
                if(nums[mid]<target && nums[r]>=target){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
        }
        return false;
    }
};
