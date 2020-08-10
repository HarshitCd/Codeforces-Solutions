#include<bits/stdc++.h>
using namespace std;

int main(){
    map<char, int> m, p;
    int mi=1e9+7, a;
    string s="Bulbasaur";
    for(auto x: s) m[x]++;
    cin>>s;
    for(auto x: s) p[x]++;

    for(auto x: m){
        a = (p[x.first]/x.second);
        mi = min(mi, a);
    }
    cout<<mi;
    return 0;
}
