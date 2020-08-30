#include<bits/stdc++.h>
using namespace std;

int main(){
    char c[]={'a', 'b', 'c'};
    int j=-1, n;
    map<char, int> m;
    string s;
    cin>>s;
    n=s.size();
    s='z'+s;

    for(int i=1; i<=n ; i++){
        if(s[i-1]!=s[i]) j++;
        if(j==3){cout<<"NO"; return 0;}
        if(c[j]!=s[i]){cout<<"NO"; return 0;}
        m[s[i]]++;
    }
    if(m['c']!=0 && (m['a']==m['c'] || m['b']==m['c'])) cout<<"YES";
    else cout<<"NO";

    return 0;
}
