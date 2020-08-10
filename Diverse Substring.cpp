#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    string s;
    cin>>n>>s;
    for(i=1; i<n; i++)
        if(s[i-1]!=s[i]) break;
    if(i==n) cout<<"NO";
    else cout<<"YES\n"<<s[i-1]<<s[i];
    return 0;
}
