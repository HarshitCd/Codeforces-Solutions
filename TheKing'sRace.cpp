#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    ll x, y, w, b;
    cin>>n>>x>>y;
    w=min(x-1, y-1)+max(x-1, y-1);
    b=min(n-x, n-y)+max(n-x, n-y);
    if(w<=b) cout<<"White\n";
    else cout<<"Black\n";
    return 0;
}
