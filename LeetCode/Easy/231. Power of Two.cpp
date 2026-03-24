// Approach 1: Brute Force (using pow) - O(n)
// Learned: works but inefficient + floating point issues

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1){
            return true;
        }
        if(n%2==1){
            return false;
        }
        for (int i=0;i<=n/2;i++){
            if(pow(2,i)==n){
                return true;
            }
            if(pow(2,i)>n){
                return false;
            }
        }
        return false;
    }
};
