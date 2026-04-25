### 🔍 Missing Number (Binary Search)

* Sort the array → expected pattern: `nums[i] == i`
* First index where `nums[i] > i` → missing number
* Use binary search to find that index

**Time:** `O(n log n)`
**Space:** `O(1)`
  
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0,r=nums.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]>mid){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};

