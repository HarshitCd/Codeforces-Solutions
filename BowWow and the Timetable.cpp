#include<bits/stdc++.h>
using namespace std;

int main(){
    int o=0, ans=0;
    string s;
    cin>>s;
    if(s=="0"){
        cout<<0;
        return 0;
    }
    for(int i=s.size()-1; i>=0; i--){
        if(s[i]=='1') o++;
        ans++;
    }
    if(o==1) ans--;
    ans=(ans%2==0)?ans/2:ans/2+1;
    cout<<ans;
    return 0;
}
