#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y, ans=0;
    string s;
    cin>>n>>x>>y>>s;
    reverse(s.begin(), s.end());
    if(s[y]=='0') ans++;
    else s[y]='0';
    for(int i=0; i<x; i++){
        if(s[i]=='1') ans++;
    }
    cout<<ans;
    return 0;
}
