#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> m(26);
    m['a'-'a']=m['e'-'a']=m['i'-'a']=m['o'-'a']=m['u'-'a']=m['y'-'a']=1;
    int i, n, c;
    string s;
    cin>>n;
    vector<int> v(n);
    for(i=0; i<n; i++) cin>>v[i];
    getline(cin, s);
    for(i=0; i<n; i++){
        getline(cin, s);
        c=0;
        for(auto x: s){
            if(x!=' ' && m[x-'a']) c++;
        }
        if(c!=v[i]) break;
    }
    if(i==n) cout<<"YES";
    else cout<<"NO";
    return 0;
}
