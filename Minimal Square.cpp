#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, b, a;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int ans=2*min(a, b);
        ans=max(ans, max(a, b));

        cout<<ans*ans<<endl;
    }
    return 0;
}
