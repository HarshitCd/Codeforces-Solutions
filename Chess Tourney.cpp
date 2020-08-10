#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(2*n);
    for(int i=0; i<2*n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    if(v[n]>v[n-1]) cout<<"YES";
    else cout<<"NO";
    return 0;
}
