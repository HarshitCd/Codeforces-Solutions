#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    vector<int> ans(3);
    cin>>n;
    vector<pair<int, int>> v;
    for(int i=1; i<=n; i++){
        cin>>a;
        v.push_back(make_pair(a, i));
    }
    sort(v.begin(), v.end());
    a=1;
    ans[0]=v[0].second;
    for(int i=1; i<n && a!=3; i++){
        if(v[i-1].first!=v[i].first) ans[a++]=v[i].second;
    }
    if(a!=3) cout<<"-1 -1 -1";
    else for(int x: ans) cout<<x<<" ";


    return 0;

}
