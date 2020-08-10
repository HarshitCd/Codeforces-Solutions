#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    long long sum=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.rbegin(), v.rend());
    cin>>m;
    vector<int> u(m);
    for(int i=0; i<m; i++) cin>>u[i];
    for(int i=0; i<n; i++){
        sum+=v[i];
    }
    for(auto x: u){
        cout<<sum-v[x-1]<<endl;
    }
    return 0;
}
