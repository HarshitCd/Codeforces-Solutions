#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> v(n/2), u(n);
    for(int i=0; i<n/2; i++) cin>>v[i];
    u[0]=0; u[n-1]=v[0];
    long long l=0, r=v[0];
    for(int i=1; i<n/2; i++){
        //cout<<l<<"-"<<r<<endl;
        u[i]=max(l, v[i]-v[i-1]);
        u[n-i-1]=min(r, v[i]-u[i]);
        u[i]=v[i]-u[n-1-i];
        l=u[i]; r=u[n-1-i];
    }
    //cout<<l<<"-"<<r<<endl;
    for(long long x: u) cout<<x<<" ";
    return 0;
}
