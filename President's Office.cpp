#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    char c;
    set<char> s;
    cin>>n>>m>>c;
    vector<vector<char>> v(n, vector<char>(m, '.'));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin>>v[i][j];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(v[i][j]==c){
                if(i-1>=0 && v[i-1][j]!=c && v[i-1][j]!='.') s.insert(v[i-1][j]);
                if(i+1<n && v[i+1][j]!=c && v[i+1][j]!='.') s.insert(v[i+1][j]);
                if(j-1>=0 && v[i][j-1]!=c && v[i][j-1]!='.') s.insert(v[i][j-1]);
                if(j+1<m && v[i][j+1]!=c && v[i][j+1]!='.') s.insert(v[i][j+1]);
            }
        }
    }
    cout<<s.size();
    return 0;
}
