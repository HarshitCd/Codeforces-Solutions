#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    long long i, a=0, b=0;
    cin>>s;
    for(i=0; s[i]!='^'; i++){}
    for(int j=0; s[j]!='\0'; j++){
        if(s[j]>='0' && s[j]<='9'){
            b=s[j]-'0';
            a+=(j-i)*b;
        }
    }
    //cout<<a<<" "<<b<<endl;
    if(a<0) cout<<"left";
    else if(a>0) cout<<"right";
    else cout<<"balance";
}
