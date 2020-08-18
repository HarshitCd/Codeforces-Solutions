#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    cin>>n;
    vector<int> v(n);
    for(i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());

    for(i=0; i<n; i++) if(v[i]!=i+1) break;
    cout<<i+1;
    return 0;
}
