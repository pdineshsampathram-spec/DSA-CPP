class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> s;
         int n = temperatures.size();
        vector<int> ans(n, 0);
       
        for (int i = 0; i < n; i++) {
            while (!s.empty() && temperatures[i] > temperatures[s.top()]) {
                int pre = s.top();
                s.pop();
                ans[pre]=i-pre;
            }
            s.push(i);
        }
        return ans;
    }
};
