#include<bits/stdc++.h>
using namespace std;

double comb(int a, int b){
    double c, f=1, e=1;
    int mx = max(a, b-a), mi = min(a, b-a);
    for(int i=b; i>mx; i--) f*=i;
    for(int i=mi; i>0; i--) e*=i;
    return f/e;
}

int main(){
    string s, t;
    double p=0.0;
    cin>>s>>t;
    map<char, int> m;
    int n = s.size(), a;
    for(char x: s) m[x]++;
    for(char x: t) m[x]--;
    m['?'] = abs(m['?']);
    if(m['+']<0 || m['-']<0) cout<<p;
    else if(m['?']==0) cout<<1;
    else{
        a=pow(2, m['?']);
        scanf("%.20f", (m['+']+m['-'])/a);
    }
    return 0;
}
