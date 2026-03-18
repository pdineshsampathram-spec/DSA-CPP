class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1;
        stack<char>s2;
        for(char c:s){
            if(c=='#'){
                if(!s1.empty()){
                s1.pop();
                }
            }
            else{
                s1.push(c);
            }
        }
        for(auto k:t){
            if(k=='#'){
                if(!s2.empty()){
                s2.pop();
                }
            }
            else{
                s2.push(k);
            }
        }
        string a="",b="";
        while(!s1.empty()){
            a=a+s1.top();
            s1.pop();
        }
        while(!s2.empty()){
            b=b+s2.top();
            s2.pop();
        }
        if(a==b){
            return true;
        }
        else{
            return false;
        }
    }
};
