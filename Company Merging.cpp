#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long ans=0, a;
    cin>>n;
    vector<vector<int>> v(n);
    for(int i=0; i<n; i++){
        cin>>a;
        vector<int> m(a);
        for(int j=0; j<a; j++){
            cin>>m[j];
        }
        sort(m.rbegin(), m.rend());
        v[i]=m;
    }
    sort(v.begin(), v.end());
    a=v[0].size();
    for(int i=1; i<n; i++){
        ans=ans + a*(v[i][0]-v[i-1][0]);
        a+=v[i].size();
    }
    cout<<ans;
    return 0;
}
