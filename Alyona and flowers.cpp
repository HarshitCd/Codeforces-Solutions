#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, a, b, ans=0;
    cin>>n>>m;
    vector<int> v(n+1), u, f(m);
    vector<pair<int, int>> x(m);
    for(int i=1; i<=n; i++){
        cin>>v[i];
        v[i]+=v[i-1];
    }

    for(int i=0; i<m; i++){
        cin>>x[i].first>>x[i].second;
        u.push_back(v[x[i].second]-v[x[i].first-1]);
        if(u[i]>0) f[i]=1;
    }

    for(int i=1; i<=n; i++){
        a = v[i]-v[i-1];
        b=0;
        for(int j=0; j<m; j++){
            if(f[j] && i>=x[j].first && i<=x[j].second) b++;
        }
        ans+=a*b;
    }
    cout<<ans<<endl;
    return 0;
}
