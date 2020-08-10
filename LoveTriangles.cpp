#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    cin>>n;
    vector<int> v(n);
    for(i=0; i<n; i++) cin>>v[i];
    for(i=0; i<n; i++){
        int a = v[i];
        int b = v[a-1];
        if(i+1==b) continue;
        if(i+1==v[v[i]-1]){
            cout<<"YES";
            break;
        }
    }
    cout<<endl<<i<<endl;
    if(i==n) cout<<"NO\n";
    return 0;
}
