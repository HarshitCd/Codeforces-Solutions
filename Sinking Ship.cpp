#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, p;
    map<string, vector<string>> m;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s>>p;
        if(p=="child") p="woman";
        m[p].push_back(s);
    }
    for(auto x: m["rat"]) cout<<x<<endl;
    for(auto x: m["woman"]) cout<<x<<endl;
    for(auto x: m["man"]) cout<<x<<endl;
    for(auto x: m["captain"]) cout<<x<<endl;
    return 0;
}
