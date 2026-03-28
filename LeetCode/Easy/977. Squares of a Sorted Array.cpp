// Approach 1: Brute Force
// Square all elements and sort the array
// Time Complexity: O(n log n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       vector<int> r;
       for(auto k: nums){
        r.push_back(k*k);
       }
       sort(r.begin(),r.end());
       return r;
    }
};
