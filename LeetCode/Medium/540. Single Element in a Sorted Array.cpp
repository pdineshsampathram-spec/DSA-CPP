/*
LeetCode 540 - Single Element in a Sorted Array

Approach: Binary Search (Index Parity)

* Pairs start at even indices before the single element
* Pattern breaks after the single element
* Use this to eliminate half of the array

Time: O(log n)
Space: O(1)
*/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        while(l<r){
            int mid=(l+r)/2;
            if(mid%2==1){
                mid--;
            }
            if(nums[mid]==nums[mid+1]){
                l=mid+2;
            }
            else{
                r=mid;
            }
        }
        return nums[r];
    }
};
