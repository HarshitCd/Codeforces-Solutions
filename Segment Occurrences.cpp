#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, q, a, b, j, i;
    string s, t;
    vector<int> v;
    cin>>n>>m>>q>>s>>t;

    for(int i=0; i<n; i++){
        j=0;
        while(j<m && s[i+j]==t[j]) j++;
        if(j==m) v.push_back(i);
    }

    int z = v.size();

    for(int k=0; k<q; k++){
        cin>>a>>b;
        if(m>n) cout<<0<<endl;
        else{
            a--; b--;
            i=0; j=0;
            while(i<z && a>v[i]) i++;
            while(i+j<z && b>=v[i+j]+m-1) j++;
            cout<<j<<endl;
        }
    }
    return 0;
}
