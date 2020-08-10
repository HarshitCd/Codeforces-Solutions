#include<bits/stdc++.h>
using namespace std;

int main(){
    int m=0, a=-1;
    string s;
    cin>>s;
    s+="A";
    for(int i=0; i<s.size(); i++){
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y'){
            m=max(m, i-a);
            a=i;
        }
    }
    cout<<m;
    return 0;
}
