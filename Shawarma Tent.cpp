#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, s1, s2, a , b, mx=0;
    map<char, int> m;
    cin>>n>>s1>>s2;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        if(a>s1) m['R']++;
        if(a<s1) m['L']++;
        if(b<s2) m['D']++;
        if(b>s2) m['U']++;
    }

    if(s1+1>=0 && s2>=0 && s1+1<=1e9 && s2<=1e9 && mx<m['R']){
        a=s1+1;
        b=s2;
        mx=m['R'];
    }
    if(s1-1>=0 && s2>=0 && s1-1<=1e9 && s2<=1e9 && mx<m['L']){
        a=s1-1;
        b=s2;
        mx=m['L'];
    }
    if(s1>=0 && s2+1>=0 && s1<=1e9 && s2+1<=1e9 && mx<m['U']){
        a=s1;
        b=s2+1;
        mx=m['U'];
    }
    if(s1>=0 && s2-1>=0 && s1<=1e9 && s2-1<=1e9 && mx<m['D']){
        a=s1;
        b=s2-1;
        mx=m['D'];
    }
    cout<<mx<<"\n"<<a<<" "<<b;
    return 0;
}
