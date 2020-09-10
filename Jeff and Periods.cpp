#include<bits/stdc++.h>
using namespace std;

int main(){
    const int inf = 1e9+7;
    int n, x, f, c=0;
    cin>>n;
    vector<pair<int, int>> a(n+1), b;
    for(int i=0; i<n; i++){
        cin>>a[i].first;
        a[i].second = i;
    }
    a[n].first = inf; a[n].second = n;

    sort(a.begin(), a.end());
    f=1;
    for(int i=0; i<n; i++){
        if(a[i].first==a[i+1].first){
            if(f && c==0) c=a[i+1].second-a[i].second;
            else if(f && c!=a[i+1].second-a[i].second) f=0;
        }
        if(a[i].first!=a[i+1].first){
            if(f) b.push_back(make_pair(a[i].first, c));
            else f=1;
            c=0;
        }
    }
    cout<<b.size()<<endl;
    for(pair<int, int> p: b) cout<<p.first<<" "<<p.second<<endl;
    return 0;
}
