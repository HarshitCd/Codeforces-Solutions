#include<bits/stdc++.h>
using namespace std;

int check(int a, int b, int c){
    int d = min(b, c), e = max(b, c);
    if(a<=d) return d;
    else return e;
}

int main(){
    int n;
    cin>>n;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++) cin>>v[i].first>>v[i].second;

    sort(v.begin(), v.end());

    int m = min(v[0].first, v[0].second);
    for(int i=1; i<n; i++) m = check(m, v[i].first, v[i].second);
    cout<<m;

    return 0;
}
