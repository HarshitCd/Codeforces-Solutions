#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, c=0, ans=0;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        v[i]=(v[i]%k==0)? v[i]/k: v[i]/k+1;
    }
    for(int i=0; i<n; i++){
        //cout<<c<<"-";
        ans+=(c+v[i])/2;
        c = (c+v[i])%2;
        //cout<<ans<<endl;
    }
    cout<<ans+c;
    return 0;
}
