class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> v(n,-1);
        if(k==0){
            return nums;
        }
        if(2*k+1>n){
            return v;
        }
        
        long long sum=0;
        for(int i=0;i<2*k+1;i++){
            sum=sum+nums[i];
        }
        v[k]=sum/(2*k+1);
        for(int i=2*k+1 ;i<n;i++){
            sum=sum+nums[i];
            sum=sum-nums[i-(2*k+1)];

            v[i-k]=(sum/(2*k+1));
        }
        return v;
    }
};
