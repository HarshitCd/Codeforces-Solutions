#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, f;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>s;
        f=0;
        for(int i=0; i<n/2; i++){
            if(s[i]==s[n-1-i] || s[i]+1==s[n-1-i]-1 || s[i]-1==s[n-1-i]+1) continue;
            else{cout<<"NO"; f=1; break;}
        }
        if(f==0) cout<<"YES";
        cout<<endl;
    }
    return 0;
}
