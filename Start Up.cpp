#include<bits/stdc++.h>
using namespace std;

int main(){
    map<char, int> m;
    m['A'] = 1;
    m['H'] = 1;
    m['I'] = 1;
    m['M'] = 1;
    m['O'] = 1;
    m['T'] = 1;
    m['U'] = 1;
    m['V'] = 1;
    m['W'] = 1;
    m['X'] = 1;
    m['Y'] = 1;
    string s;
    cin>>s;
    int n = s.size();
    for(int i=0; i<n/2; i++){
        if(!(m[s[i]]!=0 && s[i]==s[n-1-i])){cout<<"NO"; return 0;}
    }
    if(m[s[n/2]]==0) cout<<"NO";
    else cout<<"YES";
    return 0;
}
