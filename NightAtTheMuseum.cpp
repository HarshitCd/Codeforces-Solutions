#include<bits/stdc++.h>
using namespace std;

int MinRotations(string s){
    int c=0, m;
    char a='a';
    for(int i=0; s[i]!='\0'; i++){
        m = abs(s[i]-a);
        c+=(m>13)?26-m:m;;
        a = s[i];
    }
    return c;
}

int main(){
    string s;
    cin>>s;
    cout<<MinRotations(s);
    return 0;
}
