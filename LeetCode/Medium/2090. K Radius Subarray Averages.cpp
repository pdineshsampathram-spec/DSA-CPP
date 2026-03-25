class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> v(nums.size(), -1);
        if (k == 0) {
            return nums;
        }
        if (2 * k + 1 > nums.size()) {
            return vector<int>(nums.size(), -1);
        }
        int n = nums.size();
        long long sum = 0;
        for (int i = 0; i < 2 * k + 1; i++) {
            sum = sum + nums[i];
        }
        v[k] = (sum / (2 * k + 1));
        for (int i = 2 * k + 1; i < n; i++) {
            sum = sum + nums[i];
            sum = sum - nums[i - (2 * k + 1)];

            v[i - k] = (sum / (2 * k + 1));
        }
        return v;
    }
};
