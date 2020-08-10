#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    long long n, a, b, s;
    cin>>t;
    while(t--){
        cin>>a>>b>>n>>s;
        if(s%n<=b && a*n+b>=s) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
