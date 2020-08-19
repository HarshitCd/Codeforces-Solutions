#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d, i=0, j=1, m=1;
    cin>>n>>d;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());

    while(j<n){
        while(j<n && v[j]-v[i]<=d) j++;
        if(j<n){m = max(m, j-i); i++;}
    }
    cout<<n-max(m, j-i);
    return 0;
}
