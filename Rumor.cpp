#include<bits/stdc++.h>
using namespace std;

void dfs(map<int, vector<int>>& m, long long a, vector<bool>& vis){
    for(int i=0; i<m[a].size(); i++){
        if(!vis[m[a][i]]){
           vis[m[a][i]] = true;
           dfs(m, m[a][i], vis);
        }
    }
}

int main(){
    long long n, e, a, b, s=0;
    cin>>n>>e;
    vector<pair<long long, int>> v(n);
    map<int, vector<int>> m;
    vector<bool> vis(n);
    for(int i=0; i<n; i++){
        cin>>v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    for(int i=0; i<e; i++){
        cin>>a>>b;
        a--; b--;
        m[a].push_back(b);
        m[b].push_back(a);
    }

    for(int i=0; i<n; i++){
        if(!vis[v[i].second]){
            s+=v[i].first;
            dfs(m, v[i].second, vis);
        }
    }
    cout<<s;
    return 0;
}
