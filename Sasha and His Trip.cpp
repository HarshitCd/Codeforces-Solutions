#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, v, ans=0, i=2;
    cin>>n>>v;
    if(n<=v) cout<<n-1;
    else{
        ans=v;
        while(v<n-1){
            ans+=i;
            v++;
            i++;
        }
        cout<<ans;
    }
    return 0;
}
