#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i=0, ans=0;
    string s;
    cin>>n>>s;
    while(i<n-1){
        if(s[i]==s[i+1]) i++;
        else i+=2;
        ans++;
    }
    if(i==n-1) ans++;
    cout<<ans;
    return 0;
}
