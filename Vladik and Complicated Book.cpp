#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, l, r, x, c;
    cin>>n>>m;
    vector<int> v(n), u;
    map<int, int> ma;
    for(int i=0; i<n; i++){
        cin>>v[i];
        ma[i+1] = v[i];
    }
    while(m--){
        cin>>l>>r>>x;
        c=0;
        for(int i=l-1; i<r; i++)
            if(v[x-1]>v[i]) c++;
        if(v[l+c-1]==v[x-1]) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
