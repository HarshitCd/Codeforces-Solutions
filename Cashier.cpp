#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, l, a, t, ll, ans=0;
    cin>>n>>l>>a;
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++){
        cin>>t>>ll;
        v.push_back(make_pair(t, ll));
    }
    sort(v.begin(), v.end());
    t=0;
    ll=0;
    for(auto x: v){
        if(x.first-t>=a) ans+=(x.first-t)/a;
        t=x.second+x.first;
    }
    ans+=(l-t)/a;
    cout<<ans;
    return 0;

}


