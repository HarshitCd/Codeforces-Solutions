#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, s, ans=0, i;
    cin>>n>>s;
    vector<long long> v(n);
    for(i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());
    i=n/2;
    if(v[n/2]>s){
        while(i>=0 && v[i]-s>0) ans+=(v[i--]-s);
    }
    else if(v[n/2]<s){
        while(i<n && v[i]-s<0) ans+=(s-v[i++]);
    }
    cout<<ans;
    return 0;
}
