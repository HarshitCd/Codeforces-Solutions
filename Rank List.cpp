#include<bits/stdc++.h>
using namespace std;

bool sortCond(const pair<int, int> a, const pair<int, int> b){
    if(a.first==b.first) return (a.second<b.second);
    return (a.first>b.first);
}

int main(){
    int n, k, a, b;
    cin>>n>>k;
    map<pair<int, int>, int> m;
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        v.push_back(make_pair(a, b));
        m[v[i]]++;
    }
    sort(v.begin(), v.end(), sortCond);
    cout<<m[v[k-1]];
    return 0;
}
