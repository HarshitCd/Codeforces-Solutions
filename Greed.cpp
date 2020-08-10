#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long ans=0, s=0;
    cin>>n;
    vector<long long> a(n), b(n);
    vector<pair<long long, long long> >c(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        s+=a[i];
    }
    for(int i=0; i<n; i++) cin>>b[i];
    sort(b.rbegin(), b.rend());
    ans+=b[0]+b[1];
    if(ans<s) cout<<"NO";
    else cout<<"YES";
    return 0;

}
