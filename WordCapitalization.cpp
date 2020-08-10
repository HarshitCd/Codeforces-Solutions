#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 'A'-'a';
    string s;
    cin>>s;
    if(s[0]>='a' && s[0]<='z')
        s[0]=(char)(s[0]+n);
    cout<<s;
    return 0;
}
