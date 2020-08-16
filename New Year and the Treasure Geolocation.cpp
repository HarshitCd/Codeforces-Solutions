#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin>>n;
    vector<pair<int, int>> v, u;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        v.push_back(make_pair(a, b));
    }
    for(int i=0; i<n; i++){
        cin>>a>>b;
        u.push_back(make_pair(a, b));
    }

    sort(v.begin(), v.end());
    sort(u.rbegin(), u.rend());

    cout<<v[0].first+u[0].first<<" "<<v[0].second+u[0].second;
    return 0;
}
