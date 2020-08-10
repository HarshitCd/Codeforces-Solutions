#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, j=0, s=0, ans, u;
    cin>>n>>m;
    vector<long long> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    //for(int i=0; i<m; i++) cin>>u[i];
    for(int i=0; i<m; i++){
        cin>>u;
        u-=s;
        while(u>v[j]){
            s+=v[j];
            u-=v[j];
            j++;
        }
        ans=(u%v[j]==0)?v[j]:u%v[j];
        cout<<j+1<<" "<<ans<<endl;
    }
    return 0;
}
