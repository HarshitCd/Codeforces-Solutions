#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t, n, ans, turn, k;
    cin>>t;
    while(t--){
        cin>>n;
        ans=0, turn=1;
        while(n){
            if(n%4==0 && n!=4) k=1;
            else if(n%2==0) k=n/2;
            else k=1;
            if(turn) ans+=k;
            n-=k;
            turn^=1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
