#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    long long n=0, a, t=0;
    char c = s[s.size()-1];
    if(c=='f') t+=1;
    else if(c=='e') t+=2;
    else if(c=='d') t+=3;
    else if(c=='a') t+=4;
    else if(c=='b') t+=5;
    else t+=6;

    //cout<<t<<endl;

    for(int i=0; i<s.size()-1; i++) n = n*10+(s[i]-'0');
    n--;
    if(n%4>1) n-=2;
    t += (n/2)*7+n/2;
    //cout<<t<<endl;
    if(n%2==1) t+=7;

    cout<<t;
    return 0;
}
