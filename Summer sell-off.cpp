#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n, f, ans=0, i, pos;
    cin>>n>>f;
    vector<pair<ll, ll>> v;
    vector<ll> a(n), b(n);

    for(i=0; i<n; i++){
        cin>>a[i]>>b[i];
        v.push_back(make_pair(min(2*a[i], b[i]) - min(a[i], b[i]), i));
    }
    i = 0;
    sort(v.rbegin(), v.rend());
    while(i<n){
        pos = v[i].second;
        if(i<f) ans+=min(2*a[pos], b[pos]);
        else ans+=min(a[pos], b[pos]);
        i++;
    }

    cout<<ans;
    return 0;
}
