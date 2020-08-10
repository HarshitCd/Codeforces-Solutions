#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    long long ans, n, a;
    cin>>t;
    while(t--){
        cin>>n;
        int i=1, j=1;
        ans=0;
        while(n>0){
            a=n/2;
            ans+=(n-1)*4*a;
            n-=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
