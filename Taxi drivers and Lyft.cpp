#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, x, y;
    cin>>n>>m;
    vector<pair<int, int>> v(n+m), u;
    for(int i=0; i<n+m; i++) cin>>v[i].first;
    for(int i=0; i<n+m; i++) cin>>v[i].second;

    sort(v.begin(), v.end());
    for(int i=0; i<n+m; i++){
        if(v[i].second) u.push_back(make_pair(v[i].first, 0));
    }
    int s=u.size();
    for(int i=0; i<n+m; i++){
        x=1e9;
        if(v[i].second==0){
            for(int j=0; j<s; j++){
                if(abs(u[j].first-v[i].first)<x) y=j;
            }
            u[y].second++;
            u[y].first=v[i].first;
        }
    }

    //cout<<s<<" "<<x<<endl;
    for(auto x: u) cout<<x.second<<" ";
    return 0;
}
