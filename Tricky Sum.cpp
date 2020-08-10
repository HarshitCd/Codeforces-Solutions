#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, c, co=0;
    long long int ans=0, n;
    cin>>t;
    while(t--){
        cin>>n;
        ans=n*(n+1)/2;
        c=1;

        while(c<=n){
            c=2*c;
            ans-=c;
        }
        cout<<ans<<endl;
    }
}
