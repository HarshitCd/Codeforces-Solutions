#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, u="";
    cin>>s;
    int n = s.size();
    for(int i=0; i<n; i++){
        if(s[i]=='a') continue;
        u+=s[i];
    }
    int m=u.size();
    if(u=="") cout<<s;
    else if(s[n-1]=='a' || m%2==1) cout<<":(";
    else{
        for(int i=0; i<m/2; i++){
            if(u[i]!=u[m/2+i]){cout<<":("; return 0;}
        }

        for(int i=n-m/2; i<n; i++){
            if(s[i]=='a'){cout<<":("; return 0;}
            //cout<<s[i];
        }
        for(int i=0; i<n-m/2; i++) cout<<s[i];

    }
    return 0;
}
