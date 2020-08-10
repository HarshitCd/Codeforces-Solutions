#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, ans=0;
    cin>>n>>m;
    vector<string> v(n);
    vector<int> u(m);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<m; i++) cin>>u[i];
    for(int i=0; i<m; i++){
        map<char, int> p;
        int ma=-1;
        for(int j=0; j<n; j++){
            p[v[j][i]]++;
        }
        for(auto x: p){
            ma=max(ma, x.second);
        }
        ans+=ma*u[i];
    }
    cout<<ans;
    return 0;
}
