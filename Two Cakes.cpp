#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long m, o;
    cin>>n;
    vector<pair<int, int>> v(2*n);
    for(int i=0; i<2*n; i++){
        cin>>v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    o=v[1].second;
    m=v[0].second;
    for(int i=2; i<2*n; i+=2){
        m+=abs(v[i].second-v[i-2].second);
        o+=abs(v[i-1].second-v[i+1].second);
    }
    cout<<m+o;
    return 0;
}
