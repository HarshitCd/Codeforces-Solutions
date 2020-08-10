#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    set<char> c;
    int k;
    cin>>s>>k;

    if(s.size()<k) cout<<"impossible";
    else{
        for(char x: s) c.insert(x);
        int n=c.size();
        if(k>n) cout<<k-n;
        else cout<<0;
    }
    return 0;
}
