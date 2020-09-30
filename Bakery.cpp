#include<bits/stdc++.h>
using namespace std;

int main(){
    const int inf = 1e9+7;
    int n, m, k, mi=inf, a, b, w;
    cin>>n>>m>>k;
    vector<int> v(k), u(n+1);
    map<int, vector<pair<int, int>>> ma;

    for(int i=0; i<m; i++){
        cin>>a>>b>>w;
        ma[a].push_back(make_pair(b, w));
        ma[b].push_back(make_pair(a, w));
    }

    for(int i=0; i<k; i++){
        cin>>v[i];
        u[v[i]]=1;
    }

    for(int x: v){
        for(pair<int, int> y: ma[x]){
            if(u[y.first]==0 && mi>y.second) mi = y.second;
        }
    }
    if(mi==inf) cout<<-1;
    else cout<<mi;
    return 0;
}
