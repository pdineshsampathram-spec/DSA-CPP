class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        double median;
        for(auto k: nums1){
            v.push_back(k);
        }
        for(auto k: nums2){
            v.push_back(k);
        }
        sort(v.begin(),v.end());
        int n=v.size();
        if(n%2==0){
            median=(v[(n/2)-1]+v[n/2])/2.0;
        }
        else{
            median=v[n/2];
        }
        return median;
    }
};