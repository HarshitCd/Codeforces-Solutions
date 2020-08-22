#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t, a, b, n, m, k;
    cin>>t;
    while(t--){
        cin>>a>>b>>n>>m;
        if(a>b) swap(a, b);
        if(a<m) cout<<"No\n";
        else if(a+b<n+m) cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;
}
