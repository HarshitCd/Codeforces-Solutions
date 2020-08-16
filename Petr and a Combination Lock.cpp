#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, a, b=0, c=0;
    string s;
    cin>>n>>k>>s;
    a=k/2;
    for(int i=0; i<n && c<a; i++){
        if(s[i]=='(') c++;
        else b++;
        cout<<s[i];
    }
    while(c-b>0){
        cout<<")";
        b++;
    }
    return 0;
}
