#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, mi, ma;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    mi=ma=0;
    for(int i=1; i<n; i++){
        if(v[mi]>v[i]) mi=i;
        if(v[ma]<v[i]) ma=i;
    }
    int ans = max(max(ma, mi), n-min(mi, ma)-1);
    cout<<ans;
    return 0;
}
