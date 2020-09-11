#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n, x, i, j, f=0, ans=0, m;
    cin>>n;
    vector<ll> a(n), b(n);
    for(i=0; i<n; i++) cin>>a[i];
    for(i=0; i<n; i++) cin>>b[i];

    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());

    i=0; j=0;
    while(i<n && j<n){
        if(a[i]>b[j] && f==0) ans += a[i++];
        else if(a[i]>b[j] && f==1) i++;
        else if(a[i]<=b[j] && f==1) ans -= b[j++];
        else j++;
        f^=1;
    }

    while(i<n){
        ans+=(f)? 0: a[i];
        i++;
        f^=1;
    }
    while(j<n){
        ans-=(f)?b[j]: 0;
        j++;
        f^=1;
    }
    cout<<ans;
    return 0;
}
