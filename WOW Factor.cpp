#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t="";
    long long n, w=0, o=0, ans=0;
    cin>>s;
    n=s.size();
    for(int i=0; i<n; i++){
        if(s[i]=='o') o+=w;
        else if(i>0 && s[i-1]=='v'){
            w++;
            ans+=o;
        }
    }
    cout<<ans;
    return 0;
}

