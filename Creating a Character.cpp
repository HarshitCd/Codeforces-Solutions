#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, s, i, e, m;
    cin>>t;
    while(t--){
        cin>>s>>i>>e;
        m = max(0, (e+i-s+2)/2);
        cout<<max(0, e-m+1)<<endl;
    }
    return 0;
}
