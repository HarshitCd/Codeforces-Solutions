#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n+2), u;
        for(int i=1; i<=n; i++) cin>>v[i];
        v[0] = v[2];
        v[n+1] = v[n-1];
        for(int i=1; i<=n; i++){
            if(v[i]>=v[i-1] && v[i]>v[i+1]) u.push_back(v[i]);
            else if(v[i]<v[i-1] && v[i]<=v[i+1]) u.push_back(v[i]);
            else if(v[i]<v[i-1] && v[i]<=v[i+1]) u.push_back(v[i]);
            else if(v[i]>=v[i-1] && v[i]>v[i+1]) u.push_back(v[i]);
        }
        cout<<u.size()<<endl;
        for(int x: u) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
