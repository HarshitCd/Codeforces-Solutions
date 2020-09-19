#include<bits/stdc++.h>
using namespace std;

string check(string s){
    string t="", u="";
    int n = s.size(), j=0;
    for(int i=n-1; i>=0; i--){
        if(i-1>=0 && s[i]=='h'){
            t = 'h' + t;
            while(i-1>=0 && s[i-1]=='k') i--;
        }
        else t = s[i]+t;
    }

    j=t.size();
    for(int i=0; i<j; i++){
        if(t[i]=='u')
            u+="oo";
        else
            u+=t[i];
    }
    return u;
}

int main(){
    int n;
    cin>>n;
    string t;
    set<string> s;
    for(int i=0; i<n; i++){
        cin>>t;
        s.insert(check(t));
    }
    cout<<s.size();
    return 0;
}
