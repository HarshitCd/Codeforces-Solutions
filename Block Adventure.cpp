#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, m, k, i, r;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        vector<int> v(n);
        for(i=0; i<n; i++) cin>>v[i];

        for(i=0; i<n-1; i++){
            r=max(0, v[i+1]-k);
            m+=v[i]-r;
            if(m<0) break;
        }
        if(i==n-1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}



