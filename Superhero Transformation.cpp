#include<bits/stdc++.h>
using namespace std;

int main(){
    set<char> v;
    v.insert('a');
    v.insert('e');
    v.insert('i');
    v.insert('o');
    v.insert('u');
    string s, t;
    cin>>s>>t;
    if(s.size()!=t.size()) cout<<"No";
    else{
        for(int i=0; s[i]!='\0'; i++){
            if(v.find(s[i])==v.end() && v.find(t[i])==v.end()) continue;
            else if(v.find(s[i])!=v.end() && v.find(t[i])!=v.end()) continue;
            else{cout<<"No"; return 0;}
        }
        cout<<"Yes";
    }
    return 0;
}
