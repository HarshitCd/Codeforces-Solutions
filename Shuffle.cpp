#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, x, m, l, r, a, b;
    cin>>t;
    while(t--){
        cin>>n>>x>>m;
        l=r=x;
        for(int i=0; i<m; i++){
            cin>>a>>b;
            if(!(b<l || a>r)){
                l=min(l, a);
                r=max(r, b);
            }
        }
        cout<<r-l+1<<endl;
    }
    return 0;
}
