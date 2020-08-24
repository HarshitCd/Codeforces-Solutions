#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, i;
    string s;
    cin>>t;
    while(t--){
        int c=0;
        cin>>n>>s;
        for(i=0; i<n; i++){
            if(s[i]=='>') break;
        }
        c=i;
        for(i=n-1; i>=0; i--){
            if(s[i]=='<') break;
        }

        cout<<min(c, n-1-i);
        cout<<endl;
    }
    return 0;
}
