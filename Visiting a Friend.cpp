#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d, x, y, i;
    vector<pair<int, int>> v;
    cin>>n>>d;
    for(i=0; i<n; i++){
        cin>>x>>y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());
    i=0;
    int m = 0;
    while(i<n && d>m){
        if(m >= v[i].first){m = max(v[i].second, m); i++;}
        else break;
    }

    if(d<=m) cout<<"YES";
    else cout<<"NO";

    return 0;
}
