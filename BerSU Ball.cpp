#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, i, j, c=0;
    cin>>n;
    vector<int> v(n);
    for(i=0; i<n; i++) cin>>v[i];
    cin>>m;
    vector<int> u(m);
    for(i=0;i<m; i++) cin>>u[i];
    sort(v.begin(), v.end());
    sort(u.begin(), u.end());
    i=0; j=0;
    while(i<n && j<m){
        if(abs(v[i]-u[j])<=1){i++; j++; c++;}
        else if(v[i]>u[j]) j++;
        else i++;
    }
    cout<<c;
    return 0;
}
