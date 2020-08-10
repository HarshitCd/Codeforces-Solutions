#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, r;
    cin>>s>>r;
    for(int i=0;i<s.size(); i++){
        if(toupper(s[i])>toupper(r[i])){cout<<1; return 0;}
        if(toupper(s[i])<toupper(r[i])){cout<<-1; return 0;}
    }
    cout<<0;
    return 0;
}
