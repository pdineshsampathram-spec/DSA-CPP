class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int pair=0;
        int i=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
                i=i+1;
                pair++;
            }
        }
        int left=nums.size()-pair*2;
        return {pair,left};
    }
};
