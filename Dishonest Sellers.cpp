#include<bits/stdc++.h>
using namespace std;

bool mySort(pair<int, int> a, pair<int, int> b){
    return a.first-a.second < b.first-b.second;
}

int main(){
    int n, k, i, s=0;
    cin>>n>>k;
    vector<pair<int, int>> v(n);
    for(i=0; i<n; i++) cin>>v[i].first;
    for(i=0; i<n; i++) cin>>v[i].second;

    sort(v.begin(), v.end(), mySort);

    for(i=0; i<n; i++){
        if(k-->0) s+=v[i].first;
        else s+=min(v[i].second, v[i].first);
    }
    cout<<s;
    return 0;
}
