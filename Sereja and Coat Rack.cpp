#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d, m, a, s=0;
    cin>>n>>d;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    cin>>m;
    sort(v.begin(), v.end());
    for(int i=0; i<m && i<n; i++) s+=v[i];
    m=(m-n<0)?0:m-n;
    s=s-m*d;
    cout<<s;
    return 0;
}
