#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, c=0;
    cin>>n>>m;
    vector<int>v(n);
    vector<int>u(m);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<m; i++) cin>>u[i];
    if(m==1){
        for(int i=0; i<n; i++){
            if(v[i]==0) v[i] = u[0];
            if(v[i]>v[i-1]) c++;
        }
        if(c==n-1) cout<<"No";
        else cout<<"Yes";
    }
    else{
        cout<<"Yes";
    }
    return 0;
}
