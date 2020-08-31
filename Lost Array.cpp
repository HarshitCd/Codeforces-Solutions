#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    const int inf = 1e9+7;
    cin>>n;
    vector<int> v(n+1), t;
    for(int i=1; i<=n; i++) cin>>v[i];

    for(int k=1; k<=n; k++){
        vector<int> u(k, -inf);
        for(i=1; i<=n; i++){
            if(u[(i-1)%k]==-inf) u[(i-1)%k]=v[i]-v[i-1];
            else if(u[(i-1)%k]!=v[i]-v[i-1]) break;
        }
        if(i==n+1) t.push_back(k);
    }
    cout<<t.size()<<endl;
    for(int x: t) cout<<x<<" ";
    return 0;
}
