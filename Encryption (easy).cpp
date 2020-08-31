#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, p, s=0, mx=0, m=0;
    cin>>n>>p;
    vector<long long> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
        s+=v[i];
    }

    for(int i=0; i<n-1; i++){
        s=s-v[i];
        m+=v[i];
        mx = max(mx, s%p+m%p);
    }
    cout<<mx;
    return 0;
}
