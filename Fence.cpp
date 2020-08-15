#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, m=INT_MAX, ans=0;
    cin>>n>>k;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++){
        cin>>v[i];
        v[i]+=v[i-1];
    }
    for(int i=k; i<=n; i++){
        if(v[i]-v[i-k]<m){
            ans = i-k+1;
            m = v[i]-v[i-k];
        }
    }
    cout<<ans;
    return 0;
}
