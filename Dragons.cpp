#include<bits/stdc++.h>
using namespace std;

int main(){
    int s, n, a, b, i;
    cin>>s>>n;
    vector<pair<int, int>> v;
    for(i=0; i<n; i++){
        cin>>a>>b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end());

    for(i=0; i<n; i++){
        if(s>v[i].first) s+=v[i].second;
        else break;
    }
    if(i!=n) cout<<"NO";
    else cout<<"YES";
    return 0;
}
