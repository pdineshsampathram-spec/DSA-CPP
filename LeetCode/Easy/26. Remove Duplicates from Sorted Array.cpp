// Approach: Two Pointer Technique
// Since the array is sorted, duplicates are adjacent.
// Use a slow pointer (i) to track the position of the last unique element,
// and a fast pointer (j) to iterate through the array.
// Whenever a new unique element is found, increment i and overwrite nums[i].
// Finally, return i + 1 as the count of unique elements.
//
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for (int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};
