#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int maxsum=0;
    vector<pair<int,int>> v(n);
    pair<int,int> p;
    for (int i=0;i<n;i++){
        int sum;
        cin>>v[i].first>>v[i].second;
        sum=v[i].first + v[i].second;
        if(sum>=maxsum){
            maxsum=sum;
            p.first=v[i].first;
            p.second=v[i].second;
        }
    }
    cout<<p.first<<" "<<p.second;
    }
