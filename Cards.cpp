#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> Sequence(vector<int>& v, int n){
    vector<pair<int, int>> vp;
    map<int, vector<int>> m;
    for(int i=0; i<n; i++) m[v[i]].push_back(i+1);
    sort(v.begin(), v.end());
    for(int i=0; i<n/2; i++){
        int j=0;
        int a=v[i], c, d;
        int b=v[n-i-1];
        while(m[a][j]==-1) j++;
        c=m[a][j];
        m[a][j]=-1;
        j=0;
        while(m[b][j]==-1) j++;
        d=m[b][j];
        m[b][j]=-1;
        vp.push_back(make_pair(c, d));
    }
    return vp;
}


int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    vector<pair<int, int>> vp = Sequence(v, n);
    for(auto x: vp) cout<<x.first<<" "<<x.second<<"\n";
    return 0;
}
