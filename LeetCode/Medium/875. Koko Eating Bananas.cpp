/*
Approach: Binary Search on Answer

We need to find the minimum eating speed 'k' such that Koko can finish all piles within 'h' hours.

Key Idea:
- If Koko eats at speed = k, then time required for each pile is:
      ceil(piles[i] / k)
- Total hours = sum of time for all piles

We check:
      total_hours <= h

Search Space:
- Minimum speed = 1
- Maximum speed = max(piles)

Binary Search Logic:
- If a speed 'mid' is sufficient (can finish within h hours),
  we try to minimize it → move left (high = mid - 1)
- Otherwise, increase speed → move right (low = mid + 1)

Time Complexity: O(N * log(max(piles)))
Space Complexity: O(1)

Note:
- We use (piles[i] + k - 1) / k to simulate ceil division
- Use long long to avoid overflow when summing hours
*/


class Solution {
public:
    bool ok(int b,vector<int>& piles,int h){
        long long speed=0;
        for(int i=0;i<piles.size();i++){
            speed+=(piles[i]+b-1)/b;
        }
        return speed<=h;
        
        
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int k=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(ok(mid,piles,h)){
                k=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return k;
    }
};
