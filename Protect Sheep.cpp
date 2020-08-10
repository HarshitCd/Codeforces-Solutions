#include<bits/stdc++.h>
using namespace std;

int main(){
    int r, c;
    cin>>r>>c;
    vector<vector<char>> f(r+2, vector<char>(c+2, '#'));
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++) cin>>f[i][j];
    }
    for(int i=1; i<r+1; i++){
        for(int j=1; j<c+1; j++){
            if(f[i][j]=='S'){
                if(f[i-1][j]=='.') f[i-1][j]='D';
                else if(f[i-1][j]=='W'){
                    cout<<"No";
                    return 0;
                }
                if(f[i+1][j]=='.') f[i+1][j]='D';
                else if(f[i+1][j]=='W'){
                    cout<<"No";
                    return 0;
                }
                if(f[i][j-1]=='.') f[i][j-1]='D';
                else if(f[i][j-1]=='W'){
                    cout<<"No";
                    return 0;
                }
                if(f[i][j+1]=='.') f[i][j+1]='D';
                else if(f[i][j+1]=='W'){
                    cout<<"No";
                    return 0;
                }
            }
        }
    }
    cout<<"Yes\n";
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++) cout<<f[i][j];
        cout<<endl;
    }
    return 0;
}
