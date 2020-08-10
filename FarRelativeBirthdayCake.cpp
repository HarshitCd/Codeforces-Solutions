#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a=0, b=0;
    long long ans=0;
    cin>>n;
    vector<vector<char>> v(n, vector<char>(n, '.'));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cin>>v[i][j];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(v[i][j]=='C'){
                ans+=a;
                a++;
            }
            if(v[j][i]=='C'){
                ans+=b;
                b++;
            }
        }
        b=0; a=0;
    }
    cout<<ans;
    return 0;
}
