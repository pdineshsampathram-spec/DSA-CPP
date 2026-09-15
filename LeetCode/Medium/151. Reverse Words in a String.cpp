class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        stringstream ss(s);
        string word;
        while(ss>>word){
            words.push_back(word);
        }
        int n=words.size();
        string ans="";
        for(int i=0;i<n;i++){
            ans+=words[n-1-i]+' ';
        }
        ans.pop_back();
        return ans;

    }
};
