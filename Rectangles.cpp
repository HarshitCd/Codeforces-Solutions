#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, o=0, z=0, t=2, s=0;
    cin>>n>>m;
    vector<vector<int>> v(n, vector<int>(m));

    for(int i=0; i<n; i++){
        o=z=0;
        for(int j=0; j<m; j++){
            cin>>v[i][j];
            (v[i][j])? o++: z++;
        }
        s+=pow(t, z)+pow(t, o)-2;
    }

    for(int i=0; i<m; i++){
        o=z=0;
        for(int j=0; j<n; j++){
            (v[j][i])? o++: z++;
        }
        s+=pow(t, z)+pow(t, o)-2;
    }

    cout<<s-n*m;
    return 0;
}
