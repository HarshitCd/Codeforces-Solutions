#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    map<int, int> m;
    for(char x: s){
        if(x=='4' || x=='7') m[x-'0']++;
    }
    if(m[4]==m[7] && m[4]==0) cout<<-1;
    else if(m[4]>=m[7]) cout<<4;
    else cout<<7;
    return 0;
}
