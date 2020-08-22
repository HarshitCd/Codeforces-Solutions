#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n>>s;
    int m = (n-11)/2, c=m;
    for(int i=0; i<n; i++){
        if(s[i]=='8' && m){m--; s[i]='.';}
        else if(s[i]!='8' && c){c--; s[i]='.';}
    }
    //if(m) cout<<"NO";
    for(int i=0; i<n; i++){
        if(s[i]!='.'){
            if(s[i]=='8') cout<<"YES";
            else cout<<"NO";
            break;
        }
    }
    //cout<<s;
    return 0;
}
