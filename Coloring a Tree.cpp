#include<bits/stdc++.h>
using namespace std;

void dfs(map<int, vector<int>>& m, vector<int>& c, int ini, int& k, int a){
    for(int i=0; i<m[a].size(); i++){
        if(c[m[a][i]]!=ini) k++;
        dfs(m, c, c[m[a][i]], k, m[a][i]);
    }
}

int main(){
    int n, a, k=1;
    cin>>n;
    map<int, vector<int>> m;
    vector<int> c(n);
    for(int i=2; i<=n; i++){
        cin>>a;
        m[a-1].push_back(i-1);
    }
    for(int i=0; i<n; i++) cin>>c[i];
    dfs(m, c, c[0], k, 0);
    cout<<k;
    return 0;
}
