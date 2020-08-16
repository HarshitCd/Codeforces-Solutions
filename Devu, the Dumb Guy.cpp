#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, x, ans=0;
    cin>>n>>x;
    vector<long long> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++){
        ans+=v[i]*x;
        if(x!=1) x--;
    }
    cout<<ans;
    return 0;
}
