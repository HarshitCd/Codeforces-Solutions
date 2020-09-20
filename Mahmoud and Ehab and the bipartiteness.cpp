#include<bits/stdc++.h>
using namespace std;

void dfs(int a, vector<int>& col, map<int, vector<int>>& m, vector<int>& vis){
    for(int i=0; i<m[a].size(); i++){
        if(vis[m[a][i]-1]==0){
            vis[m[a][i]-1]=1;
            col[m[a][i]-1]=col[a-1]^1;
            dfs(m[a][i], col, m, vis);
        }
    }
}

int main(){
    long long n, a, b;
    cin>>n;
    map<int, vector<int>> m;
    vector<int> col(n), vis(n);
    for(int i=0; i<n-1; i++){
        cin>>a>>b;
        m[a].push_back(b);
        m[b].push_back(a);
    }

    vis[0]=1;
    dfs(1, col, m, vis);

    long long k = count(col.begin(), col.end(), 0);
    cout<<(n-k)*k-n+1;
    return 0;
}
