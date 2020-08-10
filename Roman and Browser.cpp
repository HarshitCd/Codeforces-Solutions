#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, ans=0;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int b=0; b<n; b++){
        int s=0;
        for(int i=0; i<n; i++){
            if(i%k != b%k) s+=v[i];
        }
        ans=max(ans, abs(s));
    }
    cout<<ans;
    return 0;
}
