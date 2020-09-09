#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, ans=0;
    cin>>n;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n-1; i++){
        ans+=abs(v[i].second-v[i+1].second);
    }
    cout<<ans;
    return 0;
}
