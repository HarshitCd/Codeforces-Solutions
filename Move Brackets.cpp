#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    string s;
    cin>>t;
    while(t--){
        int i=0, j=0, ans=0;
        cin>>n>>s;
        string c(n, '.');
        while(i<n){
            if(s[i]=='('){
                c[j++]=s[i];
            }
            else if(s[i]==')' && j==0){
                ans++;
            }
            else j--;
            i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}


