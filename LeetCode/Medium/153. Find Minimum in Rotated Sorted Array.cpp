// Binary Search (O(log n)):
// Compare mid with right to decide the unsorted half.
// If nums[mid] > nums[r], min lies in right half → l = mid + 1
// Else, min lies in left half (including mid) → r = mid
// Loop ends when l == r → nums[l] is the minimum.

class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        while(l<r){
            int mid=(l+r)/2;
            if(nums[r]<nums[mid]){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        return nums[l];
    }
};
