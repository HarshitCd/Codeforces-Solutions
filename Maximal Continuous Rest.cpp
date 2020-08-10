#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0, ans=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<2*n; i++){
        if(v[i%n]==1) c++;
        else{
            if(ans<c) ans=c;
            c=0;
        }
    }
    if(ans>n) cout<<n;
    else cout<<ans;
    return 0;
}
