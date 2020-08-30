#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, ans=-1;
    cin>>n>>m;

    for(int i=0; i<=n; i++){
        int cur=i;
        int leftn=n-i;
        int leftm=m-2*i;

        if(leftm>=0){
            cur+=min(leftm, leftn / 2);
            ans=max(ans, cur);
        }
        else break;
    }
    cout<<ans;
    return 0;
}
