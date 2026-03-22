class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m;
        int rem=ransomNote.size();
        for(auto a: ransomNote){
            m[a]++;
        }
        for(auto a:magazine){
            if(m[a]>0){
            m[a]--;
            rem--;
            }
        }
        if(rem==0){
        return true;
        }
        return false;
    }
};
