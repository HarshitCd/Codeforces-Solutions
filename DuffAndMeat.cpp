#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, p, m=1e+5, ans=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>p;
        m=min(m, p);
        ans+=m*a;
    }
    cout<<ans;
    return 0;
}
