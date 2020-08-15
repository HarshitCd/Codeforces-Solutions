#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, ans=0;
    cin>>n;
    vector<long long> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.rbegin(), v.rend());
    for(int i=0; i<n; i++) ans+=abs(n-i-v[i]);
    cout<<ans;
    return 0;
}
