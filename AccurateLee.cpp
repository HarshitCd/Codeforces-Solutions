#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    string s;
    cin>>t;
    while(t--){
        int n, c=0, z=0, j, i;
        string ans="";
        cin>>n>>s;
        for(j=0; j<n-1; j++){
            if(s[j]>s[j+1]) break;
        }
        if(j<n-1){
            for(j=0; j<n; j++){
                if(s[j]=='0'){ans += s[j]; z++;}
                else break;
            }
            ans+='0';
            for(j=n-1; j>=0; j--){
                if(s[j]=='1'){ans += s[j];}
                else break;
            }
            cout<<ans<<endl;
        }
        else cout<<s<<endl;
    }
    return 0;
}
