#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    map<char, int> m;
    cin>>s;
    int n=s.size(), e=0, o=0;

    for(char c: s) m[c]++;
    for(auto x: m) (x.second)%2?o++:e++;

    if(o<2) cout<<"First";
    else if(n%2==0) cout<<"Second";
    else cout<<"First";
}
