#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, k, i;
    cin>>n>>k;
    vector<pair<int, int>> v;
    for(i=0; i<n; i++){
        cin>>a;
        v.push_back(make_pair(a, i+1));
    }
    sort(v.begin(), v.end());
    for(i=0; i<n && k>=v[i].first; i++){k-=v[i].first;}

    cout<<i<<endl;
    for(int j=0; j<i; j++) cout<<v[j].second<<" ";

    return 0;
}



