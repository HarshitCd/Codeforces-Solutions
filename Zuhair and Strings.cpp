#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(26);
    int n, m, i=0, j;
    string s;
    cin>>n>>m>>s;

    while(i<=n-m){
        for(j=1; j<m; j++){
            if(s[i]!=s[i+j]) break;
        }
        if(j==m){v[s[i]-'a']++; i+=j;}
        else i+=j;
    }
    j=INT_MIN;
    for(i=0; i<26; i++){
        if(j<v[i]) j=v[i];
    }
    cout<<j;
    return 0;
}
