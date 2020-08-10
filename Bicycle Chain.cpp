#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, ans=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    cin>>m;
    vector<int> u(m);
    for(int i=0; i<m; i++) cin>>u[i];
    sort(v.begin(), v.end());
    sort(u.rbegin(), u.rend());
    m=-1;
    for(int x: v){
        for(int y: u){
            if(y%x==0){
                if(m<y/x){m=y/x; ans=1;}
                else if(m==y/x){ans++;}
            }
        }
    }
    cout<<ans;
    return 0;
}
