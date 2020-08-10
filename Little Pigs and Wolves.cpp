#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, c=0, w=0;
    cin>>n>>m;
    vector<vector<char>> v(n, vector<char>(m, '.'));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>v[i][j];
            if(v[i][j]=='W') w++;
        }
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(v[i][j]=='P'){
                if(i-1>=0 && v[i-1][j]=='W'){c++; v[i-1][j]='.';}
                else if(i+1<n && v[i+1][j]=='W'){c++; v[i+1][j]='.';}
                else if(j-1>=0 && v[i][j-1]=='W'){c++; v[i][j-1]='.';}
                else if(j+1<m && v[i][j+1]=='W'){c++; v[i][j+1]='.';}
            }
        }
    }
    cout<<min(w, c);
    return 0;

}
