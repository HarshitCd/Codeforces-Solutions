#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, s1;
    int n;
    cin>>s>>n;
    vector<int> v(26), u(26);
    v[s[0]-'a']++;
    u[s[1]-'a']++;
    for(int i=0; i<n; i++){
        cin>>s1;
        if(s[0]==s1[1]){
            v[s[0]-'a']++;
        }
        if(s[1]==s1[0]){
            u[s[1]-'a']++;
        }
        if(s==s1){cout<<"YES"; return 0;}
    }
    if(v[s[0]-'a']>1 && u[s[1]-'a']>1) cout<<"YES";
    else cout<<"NO";
    return 0;
}
