#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d, ans=2;
    cin>>n>>d;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    for(int i=1; i<n; i++){
        if(v[i-1]+d<v[i]-d) ans+=2;
        else if(v[i-1]+d==v[i]-d) ans++;
    }
    cout<<ans;
    return 0;
}
