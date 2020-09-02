#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, k, s=0;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    for(int i=0; i<k; i++) s+=v[i];
    cout<<s;
    return 0;
}
