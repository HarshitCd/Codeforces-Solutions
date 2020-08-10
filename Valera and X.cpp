#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin>>n;
    vector<vector<char>> v(n, vector<char>(n, '.'));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>v[i][j];
        }
    }
    char d = v[0][0];
    char c = v[1][0];
    if(c==d){cout<<"NO"; return 0;}
    for(int i=0; i<n; i++){
        if(v[i][i]!=d || v[i][n-1-i]!=d){cout<<"NO"; return 0;}
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((i!=j && i+j!=n-1) && v[i][j]!=c){cout<<"NO"; return 0;}
        }
    }
    cout<<"YES";
    return 0;
}
