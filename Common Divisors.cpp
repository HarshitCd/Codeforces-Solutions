#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    while(b){
        a%=b;
        swap(a, b);
    }
    return a;
}

int main(){
    long long n, ans=0, g;
    cin>>n;
    vector<long long> v(n);

    for(long long i=0; i<n; i++) cin>>v[i];
    g=v[0];

    for(long long i=1; i<n; i++) g=gcd(g, v[i]);
    for(long long j = 1; j*j<=g; j++){
        if(g%j==0){
            if(j*j==g) ans++;
            else ans+=2;
        }
    }
    cout<<ans;
    return 0;
}
