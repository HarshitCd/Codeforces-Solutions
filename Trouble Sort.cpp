#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, i;
    cin>>t;
    while(t--){
        int a=0, b=0;
        cin>>n;
        vector<pair<int, int>> v(n);
        for(i=0; i<n; i++) cin>>v[i].first;
        for(i=0; i<n; i++) {cin>>v[i].second; (v[i].second)?b++:a++;}

        if(a && b) cout<<"Yes\n";
        else{
            for(i=1; i<n; i++){
                if(v[i-1].first>v[i].first) break;
            }
            if(i==n) cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
    return 0;
}
