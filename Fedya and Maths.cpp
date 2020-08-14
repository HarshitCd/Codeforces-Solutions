#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin>>n;
    n = '0'+n;
    int m = 10*(n[n.size()-2]-'0') + n[n.size()-1]-'0';
    m%=4;
    if(m==0) cout<<4;
    else cout<<0;
}
