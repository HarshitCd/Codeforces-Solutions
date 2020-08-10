#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, dot=0;
    cin>>n;
    vector<vector<char>> a(n, vector<char>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
            if(a[i][j]=='.') dot++;
        }
    }
    if(dot%5!=0){
        cout<<"NO";
        return 0;
    }
    for(int i=1; i<n-1; i++){
        for(int j=1; j<n-1; j++){
            if(a[i][j]=='.' && a[i-1][j]=='.' && a[i][j-1]=='.' && a[i+1][j]=='.' && a[i][j+1]=='.'){
                a[i][j]='#';
                a[i][j-1]='#';
                a[i-1][j]='#';
                a[i+1][j]='#';
                a[i][j+1]='#';
                dot-=5;
            }
        }
    }
    if(dot==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}
