#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, v="";
    int n, i=0, nz=0, no=0;
    cin>>n>>s;

    while(s[i]!='\0'){
        if(s[i]=='0') nz++;
        i++;
    }
    if(nz==n)cout<<0;
    else{
        cout<<1;
        for(i=0; i<nz; i++) cout<<"0";
    }
    return 0;
}
