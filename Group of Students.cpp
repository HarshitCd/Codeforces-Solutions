#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, x, y, s=0;
    cin>>m;
    vector<int> v(m);
    for(int i=0; i<m; i++){
        cin>>v[i];
        s+=v[i];
        v[i]=s;
    }
    cin>>x>>y;
    for(int i=0; i<m; i++){
        if((v[i]>=x && v[i]<=y) && (s-v[i]>=x && s-v[i]<=y)){
            cout<<i+2;
            return 0;
        }
    }
    cout<<0;
    return 0;
}
