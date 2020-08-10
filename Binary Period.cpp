#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int i=0;
        cin>>s;
        char x = s[0];
        for(auto c: s){if(c==x) i++; else break;}
        if(i==s.size()) cout<<s;
        else for(int i=0; i<s.size(); i++) cout<<"01";
        cout<<endl;
    }
    return 0;
}
