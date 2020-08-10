#include<bits/stdc++.h>
#define long long ll
using namespace std;

int main(){
    int t, a, b, ans;
    cin>>t;
    while(t--){
        ans=0;
        cin>>a>>b;
        ans=min(a, min(b, (a+b)/3));
        cout<<ans<<endl;
    }
    return 0;
}
