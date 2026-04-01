/*
Approach: Binary Search on Answer

We need to find the floor value of sqrt(x), i.e., the largest number 'mid' such that:
    mid * mid <= x

Search Space:
    low = 1, high = x

Logic:
    - If mid * mid <= x → mid is a valid answer, try bigger (low = mid + 1)
    - Else → mid is too large, reduce (high = mid - 1)

We store the last valid 'mid' in 'ans'.

Time Complexity: O(log x)
Space Complexity: O(1)

Note:
- Use long long to avoid overflow when computing mid * mid
*/

class Solution {
public:
    int mySqrt(int x) {
        int low=0;
        int high=x;
        int ans=0;
        while(low<=high){
            long long mid=(low+high)/2;
            if(mid*mid<=x){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};
