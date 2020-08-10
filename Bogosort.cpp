#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        sort(v.rbegin(), v.rend());
        for(int x: v) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
