#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.rbegin(), v.rend());
    int m = ((n-1)%2==0)?n-1:n-2;
    for(int i=m; i>=0; i-=2) cout<<v[i]<<" ";
    for(int i=1; i<n; i+=2) cout<<v[i]<<" ";
    return 0;
}
