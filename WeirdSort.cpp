#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, m, a, c, i;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<int> v(n), u(n);
        for(i=0; i<n; i++) cin>>v[i];
        for(i=0; i<m; i++){
            cin>>a;
            u[a]=1;
            //u[a-1]=1;
        }
        for(i=0; i<n; i++){
            c=1;
            if(u[i]==1){
                while(i+c<n && u[i+c]==1)c++;
                sort(v.begin()+i-1, v.begin()+i+c);
                i+=c;
            }
        }
        for(i=0; i<n-1; i++){
            if(v[i]>v[i+1]){cout<<"NO\n"; break;}
        }
        if(i==n-1) cout<<"YES\n";
    }
}
