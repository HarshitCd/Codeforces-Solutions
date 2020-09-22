#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, i;
    cin>>m;
    vector<int> v(m), w(m);
    vector<pair<int, int>> u(m);

    for(i=0; i<m; i++) cin>>v[i];
    for(i=0; i<m; i++){cin>>u[i].first; u[i].second = i;}

    sort(v.begin(), v.end(), greater<int>());
    sort(u.begin(), u.end());

    for(int i=0; i<m; i++) w[u[i].second]=v[i];

    for(int i=0; i<m; i++) cout<<w[i]<<" ";
    return 0;
}
