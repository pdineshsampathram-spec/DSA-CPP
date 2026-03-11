class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans ;
        for (int i=0;i<2;i++){
        for(auto k:nums){
            ans.push_back(k);
        }
    }
    return ans;
    }
};
