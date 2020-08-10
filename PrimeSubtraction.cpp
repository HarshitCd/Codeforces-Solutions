#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t, n, m;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n>>m;
        if(n-m==1) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
