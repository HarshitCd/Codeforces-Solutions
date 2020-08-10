#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t, n, k, ans=1;
    cin>>t;
    while(t--){
        ans=0;
        cin>>n>>k;
        while(n>0){
            ans+=n%k+1;
            n/=k;

        }
        cout<<ans-1<<endl;
    }
    return 0;
}
