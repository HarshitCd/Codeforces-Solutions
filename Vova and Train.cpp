#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int d, v, l, r;
        cin>>d>>v>>l>>r;
        int ans = d/v-r/v+l/v;
        if(l%v==0) ans--;
        cout<<ans<<endl;
    }
    return 0;
}
