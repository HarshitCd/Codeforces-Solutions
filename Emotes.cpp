#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long s=0, m, k;
    cin>>n>>m>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.rbegin(), v.rend());
    s=(m/(k+1))*(v[0]*k+v[1])+(m%(k+1))*v[0];
    //cout<<m/(k+1)<<" "<<m%(k+1)<<endl;
    cout<<s;
    return 0;
}
