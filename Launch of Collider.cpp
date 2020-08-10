#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0, r, ans=1e9+5;
    string s;
    cin>>n>>s;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n; i++){
        if(s[i]=='R'){
            c++;
            r=i;
        }
        if(s[i]=='L' && c>0){
            ans=min(ans, v[i]-v[r]);
            c=0;
        }
    }
    if(ans==1e9+5) cout<<-1;
    else cout<<ans/2;
    return 0;
}
