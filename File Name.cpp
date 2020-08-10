#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0, ans=0;
    string s;
    cin>>n>>s;
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]=='x' && c<2) c++;
        else if(s[i]=='x' && c==2) ans++;
        else c=0;
    }
    cout<<ans;
    return 0;
}
