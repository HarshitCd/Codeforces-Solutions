#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    vector<string> s(n);
    string p="", c="%^", mid="";
    for(int i=0; i<n; i++) cin>>s[i];

    for(int i=0; i<n; i++){
        string tmp = s[i];
        reverse(s[i].begin(), s[i].end());
        if(s[i]==c) continue;
        else if(m=="" && s[i]==tmp) mid += s[i];
        else{reverse(s[i].begin(), s[i].end());}
        for(int j=i+1; j<n; j++){
            reverse(s[j].begin(), s[j].end());
            if(s[i]==s[j]){
                p+=s[i];
                mid = "";
                strcpy(s[j], c);
                break;
            }
            else{reverse(s[j].begin(), s[j].end());}
        }
    }
    cout<<p<<mid<<reverse(p.begin(), p.end());
    return 0;
}
