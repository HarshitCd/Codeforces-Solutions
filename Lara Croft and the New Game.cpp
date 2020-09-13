#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, k;
    cin>>n>>m>>k;
    if(k<n) cout<<1+k<<" "<<1;
    else{
        k-=n;
        long long a = k/(m-1);
        cout<<n-a<<" ";
        if(a%2==0) cout<<k%(m-1)+2;
        else cout<<m-k%(m-1);
    }

    return 0;
}
