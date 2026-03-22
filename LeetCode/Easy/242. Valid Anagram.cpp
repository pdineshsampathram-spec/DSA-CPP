//using sorting


class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
};


// using maps
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> v;
        int a=0;
        
        for(int i=0;i<nums.size();i++){
            bool found=false;
            
            for(int j=1;j<nums.size();j++){
                int temp=(i+j)%nums.size();
                if(nums[temp]>nums[i]){
                     a=nums[temp];
                    found=true;
                    break;
                }
            }
            if(found==false){
                v.push_back(-1);
            }
            else{
                v.push_back(a);
            }

        }
        return v;
    }
};
