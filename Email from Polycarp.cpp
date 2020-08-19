#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    int n;
    cin>>n;
    while(n--){
        cin>>s>>t;
        int n = s.size(), m = t.size(), i=0, j=0, c=0, d=0;
        char x, y;
        while(i<n && j<m){
            c=0; d=0;
            x=s[i]; y=t[j];
            if(x!=y) break;
            while(i<n && s[i]==x){c++; i++;}
            while(j<m && t[j]==y){d++; j++;}
            if(c>d) break;
            //cout<<c<<" "<<d<<endl;
        }

        //cout<<i<<" "<<j<<" ";
        if(i==n && j==m && c<=d) cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}
