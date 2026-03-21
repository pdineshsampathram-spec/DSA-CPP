class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> ans(code.size(),0);
        int n=code.size();
        if(k==0){
            return ans;
        }
        for(int i=0;i<n;i++){
            int sum=0;
            if(k>0){
                for(int j=1;j<=k;j++){
                    sum=sum+code[(i+j)%n];
                }
            }
            else{
                for(int j=1;j<=-k;j++){
                    sum=sum+code[(i-j+n)%n];
                }
            }
            ans[i]=sum;
        }

        return ans;
        
    }
};
