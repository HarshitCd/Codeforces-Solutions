#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m, ans=0;
    cin>>n>>m;
    vector<vector<char>> v(n, vector<char>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin>>v[i][j];
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<m-1; j++){
            string w="";
            w += v[i][j];
            w+=v[i+1][j];
            w+=v[i][j+1];
            w+=v[i+1][j+1];
            sort(w.begin(), w.end());
            if(w=="acef") ans++;
        }
    }
    cout<<ans;
    return 0;
}
