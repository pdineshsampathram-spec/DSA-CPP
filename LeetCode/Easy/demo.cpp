class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> max;
        for (int i=0;i<accounts.size();i++){
            int sum=0;
            for (int j=0;j<accounts[i].size();j++){
                sum=sum+accounts[i][j];
            }
            max.push_back(sum);
        }
        int best=max[0];
        for (int i=1;i<accounts.size();i++){
            if(max[i]>best){
                best=max[i];
            }
        }
        return best;
    }
};