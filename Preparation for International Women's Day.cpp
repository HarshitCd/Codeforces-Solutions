#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, ans=0;
    cin>>n>>k;
    vector<int> v(n);
    map<int, int> m;
    for(int i=0; i<n; i++){
        cin>>v[i];
        m[v[i]%k]++;
    }

    //for(auto x: m) cout<<x.first<<"-"<<x.second<<endl;

    for(int i=1; i<k/2; i++){
        ans+=min(m[i], m[k-i]);
    }
    ans+=m[0]/2;

    if(k%2!=0) ans+=min(m[k/2], m[k-k/2]);
    else ans+=m[k/2]/2;

    //cout<<int(n/2)<<endl;
    cout<<2*ans;
    return 0;
}
