#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    string s;
    cin>>n>>s;

    for(i=0; i<n; i++){
        if(!(s[i]==s[i+1] && s[i]=='1')) break;
    }
    if(i==n-1) cout<<n;
    else if(i==0){
        if(s[i]=='0') cout<<1;
        else cout<<2;
    }
    else
        cout<<i+2;
    return 0;
}
