#include<bits/stdc++.h>
using namespace std;

int main(){
    map<char, int> m;
    m['6']=6;
    m['7']=7;
    m['8']=8;
    m['9']=9;
    m['T']=10;
    m['J']=11;
    m['Q']=12;
    m['K']=13;
    m['A']=14;
    char t; string c1, c2;
    cin>>t;
    cin>>c1>>c2;
    if(c1[1]==t && c1[1]!=c2[1]) cout<<"YES";
    else if(m[c1[0]]>m[c2[0]] && c2[1]==c1[1]) cout<<"YES";
    else cout<<"NO";
    return 0;

}
