#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, a, b, j=-1, i, g=0, k=0;
    cin>>n>>m;
    vector<vector<int>> v(n);
    vector<int> deg(n);

    for(i=0; i<m; i++){
        cin>>a>>b;
        a--; b--;
        deg[a]++; deg[b]++;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    if(m==0){cout<<0; return 0;}
    for(int x: deg) if(x==0) g++;

    while(j!=0){
        vector<int> u;
        for(i=0; i<n; i++){
            if(deg[i]==1){u.push_back(i); g++; deg[i]--;}
        }
        if(g) k++;
        for(int x: u){
            for(int y: v[x]) deg[y]--;
        }
        j=g;
        g=0;
    }
    cout<<k;
    return 0;
}
