#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a=0;
    cin>>n;
    vector<int> v(n);
    map<int, vector<int>> m;
    for(int i=0; i<n; i++){
        cin>>v[i];
        m[v[i]].push_back(i+1);
    }
    sort(v.rbegin(), v.rend());
    for(int i=0; i<n; i++){
        a+=v[i]*i+1;
    }
    cout<<a<<endl;
    a=0;
    for(auto x: m){
        for(auto y: x.second){
            v[a++]=y;
        }
    }
    for(int i=a-1; i>=0; i--) cout<<v[i]<<" ";
    return 0;
}
