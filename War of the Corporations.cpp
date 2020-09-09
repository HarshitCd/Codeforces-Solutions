#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, i=0, j, c=0;
    string s, t;
    cin>>s>>t;
    n=s.size(); m=t.size();
    while(i<n){
        j=0;
        while(j<m && i+j<n && s[i+j]==t[j]) j++;
        if(j==m){c++; i+=j;}
        else i++;
    }
    cout<<c;
    return 0;
}
