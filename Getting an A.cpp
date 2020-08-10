#include<bits/stdc++.h>
using namespace std;

int main(){
    int ans=0;
    double s=0, n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        s+=v[i];
    }
    sort(v.begin(), v.end());
    while(s<4.5*n){
        s+=(5-v[ans++]);
    }
    cout<<ans;
    return 0;
}
