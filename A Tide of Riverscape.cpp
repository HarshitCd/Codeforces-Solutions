#include<bits/stdc++.h>
using namespace std;

bool isperiod(string& s, int n, int p){
    for(int i=p; i<n; i++){
        if(s[i-p]!=s[i]) return false;
    }
    return true;
}

void removeDot(string& s, int n){
    for(int i=0; i<n; i++) if(s[i]=='.') s[i]='0';
}

int main(){
    int n, p, c=0, i=0;
    string s, t;
    cin>>n>>p>>s;
    t=s;
    removeDot(s, n);
    if(!isperiod(s, n, p)){cout<<s; return 0;}

    while(i<n && t[i]!='.') i++;
    if(i+p<n){s[i]='1'; cout<<s; return 0;}
    i=n-1;
    while(i>=0 && t[i]!='.') i--;
    if(i-p>=0){s[i]='1'; cout<<s; return 0;}

    cout<<"No";
    return 0;
}
