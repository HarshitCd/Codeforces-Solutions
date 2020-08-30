#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, m=0, snow=0, candy=0, c=0;
    string s, t;
    cin>>s>>k;
    n=s.size();

    for(char x: s){
        if(x>='a' && x<='z') m++;
        else if(x=='*') snow++;
        else candy++;
    }
    if(m<=k && snow!=0){
        t+=s[0];
        for(int i=1; i<n; i++){
            if(s[i]>='a' && s[i]<='z') t+=s[i];
            while(s[i]=='*' && k-m!=0 && c==0){
                t+=s[i-1];
                m++;
            }
            if(s[i]=='*' && c==0) c++;
        }
    }

    else if(m>=k && snow+candy>=m-k){
        for(int i=0; i<n-1; i++){
            if(m-k!=0 && (s[i+1]=='*' || s[i+1]=='?')){i++; m--;}
            else if(s[i]=='*' || s[i]=='?') continue;
            else t+=s[i];
        }
        if(s[n-1]>='a' && s[n-1]<='z') t+=s[n-1];
    }

    else{cout<<"Impossible"; return 0;}

    cout<<t;
    return 0;
}
