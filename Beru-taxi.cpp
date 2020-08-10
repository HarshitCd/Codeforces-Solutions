#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, n, x, y, v;
    cin>>a>>b>>n;
    double ans=1e9+5;
    for(int i=0; i<n; i++){
        cin>>x>>y>>v;
        ans = min(ans, sqrt((a-x)*(a-x)+(y-b)*(y-b))/v);
    }
    cout<<setprecision(10)<<ans;
    return 0;
}
