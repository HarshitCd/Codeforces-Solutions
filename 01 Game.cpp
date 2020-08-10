#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int ans=0, i=0, j=0;
        n=s.length();
        string c(n, 0);
        while(i<n){
            if(j==0) c[j++] = s[i];
            else if(c[j-1]!=s[i]){j--; ans++;}
            else c[j++]=s[i];
            i++;
        }
        if(ans%2==0) cout<<"NET\n";
        else cout<<"DA\n";
    }
    return 0;
}
