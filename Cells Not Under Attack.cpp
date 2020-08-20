#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, s, a, b;
    vector<long long> v;
    set<int> x, y;
    cin>>n>>m;
    s=n;
    for(int i=0; i<m; i++){
        int j=0;
        cin>>a>>b;
        if(x.find(a)==x.end()){n--; x.insert(a);}
        if(y.find(b)==y.end()){s--; y.insert(b);}
        v.push_back(n*s);
    }
    for(long long z: v) cout<<z<<" ";
    return 0;
}
