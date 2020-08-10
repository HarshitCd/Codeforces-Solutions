#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, j=0;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.rbegin(), v.rend());
    while(k%v[j]!=0) j++;
    cout<<k/v[j];
    return 0;
}
