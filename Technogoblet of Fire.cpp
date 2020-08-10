#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k, a, b;
    cin>>n>>m>>k;
    vector<pair<int, int>> v, u;
    vector<int> t(m), z(n), y(n);
    int ans = 0;
    for(int i=0; i<n; i++) cin>>z[i];
    for(int i=0; i<n; i++) cin>>y[i];
    for(int i=0; i<n; i++){
        v.push_back(make_pair(y[i], z[i]));
    }

    for(int i=0; i<k; i++){
        cin>>a;
        u.push_back(v[--a]);
    }

    sort(v.rbegin(), v.rend());

    a=m;
    for(auto x: v){
        if(a==x.first) t[--a]=x.second;
        //cout<<x.first<<"-"<<x.second<<endl;
    }

    for(auto x: u){
        if(t[x.first-1]!=x.second) ans++;
        //cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<ans;

    return 0;
}
