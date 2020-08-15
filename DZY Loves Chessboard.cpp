#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<char>>& v, char c, int i, int j, int n, int m){
    if(v[i][j]=='.'){
        v[i][j]=c;
        c=(c=='B')?'W':'B';
        if(i+1<n) dfs(v, c, i+1, j, n, m);
        if(i-1>=0) dfs(v, c, i-1, j, n, m);
        if(j+1<m) dfs(v, c, i, j+1, n, m);
        if(j-1>=0) dfs(v, c, i, j-1, n, m);
    }
}

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<char>> v(n, vector<char>(m, '.'));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin>>v[i][j];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) dfs(v, 'B', i, j, n, m);
    }

    for(vector<char> x: v){
        for(char y: x) cout<<y;
        cout<<endl;
    }
    return 0;
}
