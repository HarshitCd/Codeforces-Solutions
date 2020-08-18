#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, i, n, k, a;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n<=k) cout<<1;
        else{
            a=n;
            for(i=1; i*i<=n; i++){
                if(n%i==0){
                    if(n/i<=k) a = min(a, i);
                    if(i<=k) a = min(a, n/i);
                }
            }
            cout<<a;
        }
        cout<<endl;
    }
    return 0;
}
