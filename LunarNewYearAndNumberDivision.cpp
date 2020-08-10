#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long ans=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    for(int i=0; i<n/2; i++){
        ans+=(v[i]+v[n-1-i])*(v[i]+v[n-1-i]);
    }
    cout<<ans;
    return 0;
}
