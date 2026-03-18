class Solution {
public:
    int maxDepth(string s) {
        stack<char> s1;
        int m=0;
        for(char c: s){
            if(c=='('){
                s1.push(c);
                m=max(m,(int)s1.size());
            }
            else if(c==')'){
                if(!s1.empty()){
                    s1.pop();
                }
            }
            
        }
        return m;
    }
};
