#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, m, b;
    map<int, vector<int>> a;
    cin>>n>>k>>m;

    for(int i=0; i<n; i++){
        cin>>b;
        a[b%m].push_back(b);
    }
    for(auto x: a){
        if(x.second.size()>=k){
            cout<<"Yes\n";
            for(int i=0; i<k; i++) cout<<x.second[i]<<" ";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}
