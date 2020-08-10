#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, s=0, ss=0, j=0, ans=0;
    cin>>n>>m;
    vector<int> v(n), u(m);

    for(int i=0; i<n; i++) cin>>v[i];

    for(int i=0; i<m; i++){
        cin>>u[i];
        ss+=u[i];
        while(s<ss && j<n) s+=v[j++];
        if(s==ss){
            ans++;
            s=0;
            ss=0;
        }
    }
    cout<<ans;
    return 0;
}
