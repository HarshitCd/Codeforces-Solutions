#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=1, s;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    s=v[0];
    for(int i=1; i<n; i++){
        if(s>v[i]) continue;
        s+=v[i];
        ans++;
    }
    cout<<ans;
    return 0;
}
