#include<bits/stdc++.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);

    int n, u, a=0;
    cin>>n;
    unordered_map<int, int> v;
    vector<bool> b(n, false);
    for(int i=1; i<=n; i++){
        cin>>u;
        v[u]=i;
    }
    for(int i=0; i<n; i++){
        cin>>u;
        if(b[u]) cout<<0<<" ";
        if(a!=n && v[u]>a){
            cout<<v[u]-a<<" ";
            a=v[u];
        }
        else cout<<0<<" ";
    }
    return 0;
}
