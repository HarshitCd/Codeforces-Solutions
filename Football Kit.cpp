#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans, t;
    cin>>n;
    map<int, int> m;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i].first>>v[i].second;
        m[v[i].first]++;
    }
    t=2*(n-1);
    for(int i=0; i<n; i++){
        ans = n-1-m[v[i].second];
        cout<<t-ans<<" "<<ans<<endl;
    }
    return 0;
}
