#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0;
    cin>>n;
    long long ans=n+n-1;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n; i++){
        ans+=abs(c-v[i]);
        c=v[i];
    }
    cout<<ans;
    return 0;
}
