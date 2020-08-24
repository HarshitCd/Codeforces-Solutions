#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    int n;
    cin>>s;
    t=s;
    n=s.size();
    for(int i=1; i<n; i++){
        if(s[i]>s[i-1]) s[i]=s[i-1];
    }
    cout<<"Mike\n";
    for(int i=1; i<n; i++){
        if(s[i-1]<t[i]) cout<<"Ann\n";
        else cout<<"Mike\n";
    }
    return 0;
}
