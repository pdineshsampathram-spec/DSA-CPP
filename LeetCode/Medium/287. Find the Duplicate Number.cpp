🔍 **Binary Search on Value Range (Pigeonhole Principle)**

Instead of sorting or modifying the array, we binary search the value range `[1, n]`.
For each `mid`, count how many numbers are `≤ mid`.

* If `count > mid`, the duplicate lies in `[1, mid]` (overflow in range)
* Else, it lies in `[mid+1, n]`

This works because a valid range of size `mid` can hold at most `mid` distinct numbers.

⏱️ **Time:** O(n log n)
🧠 **Space:** O(1)
🚫 **No array modification**


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int l=0,r=nums.size()-1;
        while(l<r){
            int mid=l+(r-l)/2;
            int count=0;
            for(auto x: nums){
                if(x<=mid){
                    count++;
                }
            }
            if(count>mid){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};
