#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, p, q;
    cin>>t;
    while(t--){
        cin>>p;
        long long o=0, e=0, v, u, ans=0;
        for(int i=0; i<p; i++){
            cin>>v;
            if(v%2==0) e++;
            else o++;
        }
        cin>>q;
        for(int i=0; i<q; i++){
            cin>>u;
            ans+=(u%2==0)?e:o;
        }

        cout<<ans<<endl;
    }
    return 0;
}
