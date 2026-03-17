//Using Vector

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> v;
        for(auto c:operations){
            if(c=="C"){
                v.pop_back();
            }
            else if(c=="D"){
                v.push_back(v[v.size()-1]*2);
            }
            else if(c=="+"){
                v.push_back(v[v.size()-1]+v[v.size()-2]);
            }
            else{
                v.push_back(stoi(c));
            }
        }
        int sum=0;
        for(auto k:v){
            sum=sum+k;
        }
        return sum;
    }
};


//Using Stack

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int sum=0;
        for(auto c:operations){
            if(c=="C"){
                s.pop();
            }
            else if(c=="D"){
                s.push(s.top()*2);
            }
            else if(c=="+"){
                int a=s.top();
                s.pop();
                int b=s.top();
                s.push(a);
                s.push(a+b);
            }
            else{
                s.push(stoi(c));
            }
        }
        while(!s.empty()){
            sum=sum+s.top();
            s.pop();
        }
        return sum;
    }
};
