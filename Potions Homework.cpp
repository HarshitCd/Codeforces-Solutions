#include<bits/stdc++.h>
using namespace std;

int main(){
    const int mod = 10007;
    int n, ans=0;
    cin>>n;
    vector<int> v(n), u;
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    u=v;
    reverse(u.begin(), u.end());
    for(int i=0; i<n; i++){
        ans = (ans+((v[i]%mod)*(u[i]%mod))%mod)%mod;
    }
    cout<<ans;
    return 0;
}
