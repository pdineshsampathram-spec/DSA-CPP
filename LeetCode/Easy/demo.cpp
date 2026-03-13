class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0;
        for (auto k: nums){
            total=total+k;
        }
        int lsum=0;
        for(int i=0;i<nums.size();i++){
            
            if(lsum==total-lsum-nums[i]){
                return i;
            }
            lsum=lsum+nums[i];
        }
        return -1;
    }
};