//optimal

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int> v(26,0);
        for(int i =0 ; i < s.size() ; i++){
            v[s[i]-'a']++;
        }
        for(int i =0 ; i < s.size() ; i++){
            v[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(v[i]!=0) return false;
        }
        return true;
    }
};



//using sorting


class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
};


// using maps
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int> m;
        if(s.size()!=t.size()){
            return false;
        }
        for(auto a:s){
            m[a]++;
        }
        for(auto a:t){
            m[a]--;
        }
        for(auto it:m){
            if(it.second!=0){
                return false;
            }
        }
        return true;
    }
};
