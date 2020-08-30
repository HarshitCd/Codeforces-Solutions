#include<bits/stdc++.h>
using namespace std;

bool sortF(pair<double, int> a, pair<double, int> b){
    if(a.first==b.first) return a.second>b.second;
    return a.first<b.first;
}

int main(){
    double t1, t2, k, a, b;
    int n;
    cin>>n>>t1>>t2>>k;
    vector<pair<double, int>> v(n);
    for(int i=0; i<n; i++){
        cin>>a>>b;
        v[i].first = max(a*t1*(100-k)/100+b*t2, b*t1*(100-k)/100+a*t2);
        v[i].second=i+1;
    }

    sort(v.rbegin(), v.rend(), sortF);

    for(auto x: v) printf("%d %.2f\n", x.second, x.first);
    return 0;
}
