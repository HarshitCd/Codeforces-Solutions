#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, k, m, a, z;
    cin>>n>>k>>m;
    string s;
    map<string, int> ma;
    vector<string> v(n);
    vector<int> u(n), g(k, 1e9);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int  i=0; i<n; i++) cin>>u[i];

    for(int i=0; i<k; i++){
        cin>>a;
        while(a--){
            cin>>z;
            z--;
            g[i] = min(g[i], u[z]);
            ma[v[z]] = i;
        }
    }
    a=0;
    for(int i=0; i<m; i++){
        cin>>s;
        a+=g[ma[s]];
    }
    cout<<a;
    return 0;
}
