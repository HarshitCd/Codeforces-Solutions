#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, mx;
    string s;
    cin>>t;
    map<char, char> m;
    m['R'] = 'P';
    m['P'] = 'S';
    m['S'] = 'R';
    while(t--){
        map<char, int> mm;
        cin>>s;
        mx=0; char c='P';
        for(char x: s){
            if(mx<++mm[x]){
                mx=mm[x];
                c=x;
            }
        }
        for(char x: s) cout<<m[c];
        cout<<endl;
    }
    return 0;
}
