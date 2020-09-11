#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<ll>> v(5, vector<ll>(5));
int z=0;

ll cal(vector<ll>& u){
    ll val=0;

    for(int i=0; i<4; i++){
        for(int j=i; j<4; j+=2){
            val += v[u[j]][u[j+1]]+v[u[j+1]][u[j]];
        }
    }

    return val;
}

void permute(vector<ll>& s, vector<ll>& u, int k, ll& mx){
    if(k==5){
        mx = max(mx, cal(u));
        return;
    }

    for(int i=0; i<5; i++){
        if(s[i]>0){
            u[k]=s[i]-1;
            s[i] *= -1;
            permute(s, u, k+1, mx);
            s[i] *= -1;
        }
    }
}

int main(){
    ll mx=0;
    vector<ll> s = {1, 2, 3, 4, 5}, u(5);
    ll ans=0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++) cin>>v[i][j];
    }

    permute(s, u, 0, mx);
    cout<<mx;
    return 0;
}
