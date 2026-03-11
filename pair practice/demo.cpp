#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    pair<int,int> p = {a, b};
    for(int i = 1; i < n; i++){
        cin >> a >> b;

        if(b > p.second){
            p.first = a;
            p.second = b;
        }
    }
    cout << p.first << " " << p.second;
    return 0;
}