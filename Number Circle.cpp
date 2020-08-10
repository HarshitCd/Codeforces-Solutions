#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    if(v[n-3]+v[n-2]>v[n-1]){
        cout<<"YES\n";
        cout<<v[n-2]<<" "<<v[n-1]<<" "<<v[n-3];
        for(int i=n-4; i>=0; i--) cout<<" "<<v[i];
    }
    else cout<<"NO";
    return 0;
}
