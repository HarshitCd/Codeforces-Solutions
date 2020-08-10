#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, m, n;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<vector<char>> v(n, vector<char>(m, 'B'));
        v[0][0]='W';
        for(auto x: v){
            for(auto y: x) cout<<y;
            cout<<"\n";
        }
    }
    return 0;
}
