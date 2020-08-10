#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, i=0;
    cin>>n>>m;
    vector<int> v(m, n/m);
    while(i<n%m) v[i++]++;
    for(auto x: v) cout<<x<<" ";
    return 0;
}
