#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, a, b;
    long long ans=0, l, r;
    cin>>n>>m;
    string s(n, '0');
    for(int i=1; i<n; i+=2) s[i]='1';
    for(int i=0; i<m; i++){
        cin>>a>>b;
        a--; b--;
        r=l=0;
        for(int j=a; j<=b; j++){
            if(s[j]=='0') r++;
            else l++;
        }
    }
    cout<<s;
    return 0;
}
