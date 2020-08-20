#include<bits/stdc++.h>
using namespace std;

void sol(vector<string>& v, int i, int j, int &c){
    v[i][j]=2;
    c--;
    if(c==0) return;
    if(i-1>=0 && v[i-1][j]=='1') sol(v, i-1, j, c);
    if(j-1>=0 && v[i][j-1]=='1') sol(v, i, j-1, c);
}

int main(){
    int t, n;
    cin>>t;
    while(t--){
        int c=0;
        cin>>n;
        vector<string> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            c+=count(v[i].begin(), v[i].end(), '1');
        }

        for(int i=0; i<n; i++){
            if(v[n-1][i]=='1') sol(v, n-1, i, c);
        }
        for(int i=0; i<n; i++){
            if(v[i][n-1]=='1') sol(v, i, n-1, c);
        }

        if(c==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
