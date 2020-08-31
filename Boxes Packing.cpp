#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, mx=0;
    cin>>n;
    map<int, int> m;
    for(int i=0; i<n; i++){
        cin>>a;
        m[a]++;
    }
    for(auto x: m){
        mx = max(mx, x.second);
    }
    cout<<mx;
    return 0;
}
