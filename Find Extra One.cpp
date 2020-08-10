#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, n, ans=0, ansl=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        if(a<0) ans++;
        if(a>0) ansl++;
    }
    if(ans<=1 || ansl<=1) cout<<"Yes";
    else cout<<"No";
    return 0;
}
