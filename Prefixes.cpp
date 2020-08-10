#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i=0, c=0;
    string s;
    cin>>n>>s;
    while(i<n){
        if(s[i]==s[i+1]){
            if(s[i]=='a') s[i]='b';
            else s[i]='a';
            c++;
        }
        i+=2;
    }
    cout<<c<<"\n"<<s;
    return 0;
}
