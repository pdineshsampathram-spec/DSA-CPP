#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int count=0;
    for(auto k:v){
        if(k%2==0){
            count++;
        }
    }
    cout<<count<<endl;
}
