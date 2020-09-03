#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t, m, i;
    cin>>t;
    while(t--){
        m=1e9+7;
        cin>>n;
        vector<int> v(n), u;
        for(i=0; i<n; i++){
            cin>>v[i];
            m = min(m, v[i]);
        }
        u=v;
        sort(v.begin(), v.end());

        for(i=0; i<n; i++){
            if(v[i]!=u[i] && u[i]%m>0) break;
        }
        if(i==n) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
