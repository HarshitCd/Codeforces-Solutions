#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, l, r, ma=-1;
    vector<pair<int, int>> v, u;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>l>>r;
        v.push_back(make_pair(r, l));
    }
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>l>>r;
        u.push_back(make_pair(r, l));
    }
    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    for(auto x: u){
        ma = max((x.second-v[0].first), ma);
    }
    for(auto x: v){
        ma = max((x.second-u[0].first), ma);
    }
    ma = (ma<0)?0:ma;
    cout<<ma;
    return 0;
}
