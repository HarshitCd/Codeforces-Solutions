#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    map<string, int> m;
    cin>>n;
    while(n--){
        cin>>s;
        m[s]++;
    }
    for(auto x: m){
        if(n<x.second){
            n=x.second;
            s=x.first;
        }
    }
    cout<<s;
    return 0;
}
