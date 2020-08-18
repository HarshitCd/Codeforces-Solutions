#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, i;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2==0) cout<<n/2<<" "<<n/2;
        else{
            for(i=3; i*i<=n; i++){
                if(n%i==0) break;
            }
            if(i*i>n) i=n;
            cout<<n/i<<" "<<n-n/i;
        }
        cout<<endl;
    }
    return 0;
}
