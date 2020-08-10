#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    int m=1e9+5;
    unordered_set<int> s;
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n-2; i++){
        m=m>(v[i+2]-v[i])? v[i+2]-v[i]: m;
    }
    for(int i=0; i<n-1; i++){
        m=m<(v[i+1]-v[i])? v[i+1]-v[i]: m;
    }
    cout<<m;
    return 0;
}
