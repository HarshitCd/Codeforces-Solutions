#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, k, a, b=0, ans=0;
    cin>>n>>k;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>a;
        a = max(0ll, a-b);
        ans+=(a%k)?a/k+1: a/k;
        b = a%k?k-a%k: 0;
    }
    cout<<ans;
    return 0;
}
