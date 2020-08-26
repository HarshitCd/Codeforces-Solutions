#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j;
    string s, p, t;
    cin>>n;
    while(n--){
        map<char, int> m;
        int f=0, x, y;
        cin>>s>>t>>p;
        x=t.size(); y=s.size();
        i=0; j=0;
        for(char x: p) m[x]++;

        while(i<x){
            if(j<y && t[i]==s[j]){i++; j++;}
            else if(j>y){
                if(m[t[i]]){m[t[i]]--; i++;}
                else{f=1; break;}
            }
            else if(t[i]!=s[j]){
                if(m[t[i]]){m[t[i]]--; i++;}
                else{f=1; break;}
            }
        }
        if(f || (j!=y && i==x)) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
