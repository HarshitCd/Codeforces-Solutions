#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n, m, ans=0, a, c, b;
    map<ll, ll> ma;
    cin>>n>>m;
    for(ll i=0; i<m; i++){
        cin>>a>>b>>c;
        ma[b]+=c;
        ma[a]-=c;
    }
    for(auto x: ma){
        ans+=(x.second<0)?0 :x.second;
    }
    cout<<ans;
    return 0;
}
