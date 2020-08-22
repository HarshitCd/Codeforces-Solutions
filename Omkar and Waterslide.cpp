#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, t;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long long> v(n);
        long long a=0, m, s=0;
        for(int i=0; i<n; i++) cin>>v[i];
        m=v[0];
        for(int i=1; i<n; i++){
            a+=max(s, v[i-1]-v[i]);
        }
        cout<<a<<"\n";
    }
    return 0;
}
