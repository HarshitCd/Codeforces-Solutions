#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a=k/n;
        int b=k%n;
        long long ans=0;
        while(n--){
            if(b-->0)
                ans+=(a+1)*(a+1);
            else
                ans+=a*a;
        }
        cout<<ans<<endl;
    }
    return 0;
}
