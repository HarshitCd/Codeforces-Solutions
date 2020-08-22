#include<bits/stdc++.h>
using namespace std;

int main(){
    char c[] = {'[', ':', ':', ']'};
    int i, j=0, k=3, l=0, n, p=0;
    string s;
    cin>>s;
    n=s.size();

    for(i=0; i<n; i++){
        if(s[i]==c[j] && j<2){j++; s[i]='.';}
        if(j==2) break;
    }
    if(j==2){
        for(i=n-1; i>=0; i--){
            if(s[i]=='.' || k==1) break;
            if(s[i]==c[k] && k>1){k--; s[i]='.';}
        }
    }
    if(k==1 && j==2){
        for(i=0; i<n; i++){
            if(s[i]=='.') p++;
            if(s[i]=='|' && p==2) l++;
        }
    }
    //cout<<s<<endl;
    if(j==2 && k==1) cout<<4+l;
    else cout<<-1;
    return 0;
}
