#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<(int)n/2; i+=2){
        swap(v[i], v[n-1-i]);
    }
    for(auto x: v) cout<<x<<" ";
    return 0;
}
