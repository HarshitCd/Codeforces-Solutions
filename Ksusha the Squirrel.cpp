#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, c=0, ans=0;
    char a;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a=='#') c++;
        else{
            ans = max(c, ans);
            c=0;
        }
    }
    if(ans>=k) cout<<"NO";
    else cout<<"YES";
}
