#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    string s, u;
    cin>>t;
    while(t--){
        int c=0, arr[2];
        cin>>n>>s>>u;
        for(int i=0; i<n && c<=2; i++){
            if(s[i]==u[i]) continue;
            if(s[i]!=u[i] && c!=2){arr[c]=i; c++;}
            else c++;
        }
        if(c!=2) cout<<"No";
        else{
            if(s[arr[0]]==s[arr[1]] && u[arr[0]]==u[arr[1]]) cout<<"Yes";
            else cout<<"No";
        }
        cout<<endl;
    }
    return 0;
}
