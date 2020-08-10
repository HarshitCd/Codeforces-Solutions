#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    m=v[0];
    for(int i=1; i<n; i++){
        m=max(m, v[i-1]);
        v[i] += m;
    }
    for(auto x: v) cout<<x<<" ";
    return 0;
}
