#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n, i;
    cin>>n>>s;

    for(i=0; i<n-1; i++){
        if(s[i]>s[i+1]){s[i]='_'; break;}
    }
    if(i==n-1) s[i]='_';
    for(char x: s){
        if(x!='_') cout<<x;
    }
    return 0;
}
