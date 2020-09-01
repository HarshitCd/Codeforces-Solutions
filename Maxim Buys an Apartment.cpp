#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, k;
    cin>>n>>k;

    if(k==n || k==0) cout<<0<<" "<<0;
    else if(3*k<=n) cout<<1<<" "<<2*k;
    else cout<<1<<" "<<n-k;

    return 0;
}
