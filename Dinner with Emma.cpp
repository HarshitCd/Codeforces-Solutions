#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, ma = -1;
    cin>>n>>m;
    vector<int> mi(n, 1e9+7);
    vector<vector<int>> v(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>v[i][j];
            mi[i] = min(mi[i], v[i][j]);
        }
    }
    for(int x: mi){
        ma = max(ma, x);
    }
    cout<<ma;
    return 0;
}
