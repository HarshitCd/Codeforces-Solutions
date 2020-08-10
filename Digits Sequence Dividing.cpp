#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>s;
        if(n==2 && s[0]>=s[1]) cout<<"NO\n";
        else{
            cout<<"YES\n";
            cout<<2<<endl;
            cout<<s[0]<<" "<<s.substr(1, n)<<endl;
        }
    }
    return 0;
}
