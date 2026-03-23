class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int s1=nums1.size();
        int s2=nums2.size();
        vector<int> ans;
        unordered_set<int> s;
        for(int i=0;i<s1;i++){
            for(int j=0;j<s2;j++){
                if(nums1[i]==nums2[j]){
                    s.insert(nums1[i]);
                }
            }
        }
        for(auto c:s){
            ans.push_back(c);
        }
        return ans;
    }
};
