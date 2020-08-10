#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, a=0, b;
    cin>>n>>k;
    vector<int> v(n);
    ;
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=1; i<n; i++){
        if(v[i]+v[i-1]<k){
            a+=k-v[i]-v[i-1];
            v[i] += k-v[i]-v[i-1];
        }
    }
    cout<<a<<endl;
    for(auto x: v) cout<<x<<" ";
    return 0;
}
