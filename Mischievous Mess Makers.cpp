#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, k, i=1;
    long long s=0;
    cin>>n>>k;

    if(k>=n/2){cout<<n*(n-1)/2; return 0;}

    while(i<=k){s+=(n-i); i++;}
    if(i!=n+1){
        s+=(n-2*k)*k;
        s = s+k*(k-1)/2;
    }

    cout<<s;
    return 0;
}
