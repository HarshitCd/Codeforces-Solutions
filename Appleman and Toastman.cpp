#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, a=0, s=0, ans;
    cin>>n;
    vector<long long> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        s+=v[i];
    }
    ans=s;
    sort(v.begin(), v.end());

    for(int i=0; i<n-1; i++){
        ans+=s;
        ans-=a;
        a+=v[i];
    }
    cout<<ans;
    return 0;
}
