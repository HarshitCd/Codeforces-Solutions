#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ma=-1;
    string s;
    map<string, int> m;
    cin>>n>>s;
    for(int i=0; i<n-1; i++){
        string s1="";
        s1+=s[i];
        s1+=s[i+1];
        m[s1]++;
    }
    for(auto x: m){
        //cout<<x.first<<" "<<x.second<<endl;
        if(ma<x.second){
            ma=x.second;
            s=x.first;
            //cout<<s<<endl;
        }
    }
    cout<<s;
    return 0;
}
