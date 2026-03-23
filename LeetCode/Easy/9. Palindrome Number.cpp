class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || x % 10 == 0 && x != 0) {
            return false;
        }
        long long rem, ans = 0, o = x;
        while (x != 0) {
            rem = x % 10;
            ans = ans * 10 + rem;
            x = x / 10;
        }

        return ans==o;
    }
};
