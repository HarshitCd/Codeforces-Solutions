#include<bits/stdc++.h>
using namespace std;

int main(){
    const int inf = 1e9+7;
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        if(v[0]>=v[n-1]) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
