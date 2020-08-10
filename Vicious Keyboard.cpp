#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t="";
    int n=0, j=0, i, c=0, f=0;
    cin>>s;
    int m = s.size();
    for(i=0; i<m-1; i++){
        if(s[i]=='V' && s[i+1]=='K') {s[i]='.'; s[i+1]='.'; i++; c++;}
        else {t+=s[i]; j++;}
    }
    for(int i=0; i<m-1; i++){
        if(s[i]==s[i+1] && s[i]!='.'){c++; break;}
    }
    //cout<<s<<endl;
    cout<<c;
    return 0;
}
