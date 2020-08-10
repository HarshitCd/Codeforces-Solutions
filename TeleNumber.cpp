#include<bits/stdc++.h>
#include<string>
using namespace std;

void Tele_Number(string& s, int& n){
    int i=0;
    if(n>=11){
        while(s[i]!='\0' && s[i]!='8') ++i;
        //cout<<n-i<<endl;
        if(s[i]=='8' && n-i>=11){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

int main(){
    int t, n;
    string s;
    cin>>t;
    for(int i=0; i<t; ++i){
        cin>>n>>s;
        Tele_Number(s, n);
    }
    return 0;
}
