#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t, a, b, x, y, ans=0;
    cin>>t;
    while(t--){
        cin>>x>>y>>a>>b;
        b=min(a+a, b);
        ans=abs(x-y)*a;
        ans+=min(x, y)*b;
        cout<<ans<<endl;
    }
    return 0;
}
