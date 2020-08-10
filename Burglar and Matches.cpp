#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n, a, b;
    long long ans=0;
    cin>>n>>m;
    vector<pair<int, int>>v;
    for(int i=0; i<m; i++){
        cin>>a>>b;
        v.push_back(make_pair(b, a));
    }
    sort(v.rbegin(), v.rend());
    int i=0;
    while(n && i<m){
        if(n>=v[i].second){
            ans+=v[i].second*v[i].first;
            n-=v[i].second;
        }
        else{
            ans+=n*v[i].first;
            n=0;
        }
        i++;
    }
    cout<<ans;
    return 0;
}
