#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    map<char, int> m, p;
    cin>>s;
    int n=s.size();
    for(int i=0; i<n; i++){
        m[s[i]]++;
        if(s[i]!='!') p[s[i]]=((i+1)%4==0)?4:(i+1)%4;
    }
    int z = (n-(p['R']-1))%4==0?(n-(p['R']-1))/4:(n-(p['R']-1))/4+1;
    m['R'] = z-m['R'];
    z = (n-(p['B']-1))%4==0?(n-(p['B']-1))/4:(n-(p['B']-1))/4+1;
    m['B'] = z-m['B'];
    z = (n-(p['Y']-1))%4==0?(n-(p['Y']-1))/4:(n-(p['Y']-1))/4+1;
    m['Y'] = z-m['Y'];
    z = (n-(p['G']-1))%4==0?(n-(p['G']-1))/4:(n-(p['G']-1))/4+1;
    m['G'] = z-m['G'];

    cout<<m['R']<<" "<<m['B']<<" "<<m['Y']<<" "<<m['G'];
    return 0;

}
