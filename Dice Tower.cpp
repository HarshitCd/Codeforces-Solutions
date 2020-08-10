#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    long long n;
    cin>>t;
    while(t--){
        cin>>n;
        int m=n%14;
        if(m<7 && m>0 && n-14>0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
