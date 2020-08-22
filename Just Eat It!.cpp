#include<bits/stdc++.h>
using namespace std;

bool check(vector<long long>& v, long long n){
    long long s=0;
    for(int i=0; i<n; i++){
        s+=v[i];
        if(s<=0) return false;
    }
    s=0;
    for(int i=n-1; i>=0; i--){
        s+=v[i];
        if(s<=0) return false;
    }
    return true;
}

int main(){
    long long t, n;
    cin>>t;
    while(t--){
        long long s=0;
        cin>>n;
        vector<long long> v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        if(check(v, n)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
