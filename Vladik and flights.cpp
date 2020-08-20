#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    string s;
    cin>>n>>a>>b>>s;
    a--; b--;

    if(s[a]!=s[b]) cout<<1;
    else cout<<0;
    return 0;
}
