#include<bits/stdc++.h>
using namespace std;

int main(){
    long long s=0, m=0, c=0;
    int n, k, a;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n; i++){
        cin>>a;
        if(a==1){s+=v[i]; v[i]=0;}
    }

    for(int i=0; i<k; i++) m+=v[i];
    c=m;
    for(int i=1; i<n-k+1; i++){
        c = c-v[i-1]+v[i+k-1];
        m = max(m, c);
    }
    cout<<s+m;
    return 0;
}
