#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, g;
    cin>>n;
    vector<vector<long long>> v(n, vector<long long>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cin>>v[i][j];
    }
    g = sqrt((v[0][1]*v[0][2]/v[1][2]));
    cout<<g<<" ";
    for(int i=1; i<n; i++)cout<<v[0][i]/g<<" ";
    return 0;
}
