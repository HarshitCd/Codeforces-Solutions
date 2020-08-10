#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    set<char> ns;
    cin>>s;
    for(int i=0; s[i]!='\0'; i++) ns.insert(s[i]);
    if(ns.size()%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    return 0;
}
