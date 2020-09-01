#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n>>s;

    s = '0'+s+'0';
    for(int i=1; i<=n; i++){
        if(s[i]=='1'){
            if(s[i-1]!='0' || s[i+1]!='0'){cout<<"No"; return 0;}
        }
        else{
            if(s[i-1]=='0' && s[i+1]=='0'){cout<<"No"; return 0;}
        }
    }
    cout<<"Yes";
    return 0;
}
