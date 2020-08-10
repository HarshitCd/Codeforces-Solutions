#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int i=0, h=0, m=0, n;
    cin>>s>>n;
    while(s[i]!=':'){
        h=h*10+(s[i]-'0');
        i++;
    }
    i++;
    while(s[i]!='\0'){
        m=m*10+(s[i]-'0');
        i++;
    }
    //cout<<h<<":"<<m<<endl;
    m+=n;
    h+=m/60;
    m%=60;
    h%=24;
    if(h>9)
        cout<<h<<":";
    else
        cout<<"0"<<h<<":";
    if(m>9)
        cout<<m;
    else
        cout<<"0"<<m;
    return 0;
}
