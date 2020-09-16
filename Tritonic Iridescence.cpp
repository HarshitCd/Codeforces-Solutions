#include<bits/stdc++.h>
using namespace std;

set<string> x;

void check(int n, int& c, string& s, int a){
    char col[] = {'C', 'Y', 'M'};

    if(a==n+1){
        if(x.find(s)==x.end()){
            c++;
            x.insert(s);
        }
        return;
    }

    for(int i=0; i<3 && s[a]=='?' && c!=2; i++){
        if(s[a-1]!=col[i] && s[a+1]!=col[i]){
            s[a]=col[i];
            check(n, c, s, a+1);
            s[a]='?';
        }
    }

    if(c!=2 && s[a]!='?') check(n, c, s, a+1);
}

int main(){
    int n, c=0;
    string s;
    cin>>n>>s;

    s = '?'+s+'?';

    for(int i=1; i<=n; i++){
        if(s[i]!='?' && s[i]==s[i+1]){cout<<"No"; return 0;}
    }

    check(n, c, s, 1);
    if(c==2) cout<<"Yes";
    else cout<<"No";

    return 0;
}
