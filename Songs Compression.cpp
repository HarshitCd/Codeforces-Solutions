#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, s=0, a, b, i;
    cin>>n>>m;
    vector<int> v(n);
    for(i=0; i<n; i++){
        cin>>a>>b;
        s+=a;
        v[i]=a-b;
    }
    sort(v.rbegin(), v.rend());
    i=0;
    while(s>m && i<n){
        s-=v[i];
        i++;
    }
    if(s>m) cout<<-1;
    else cout<<i;
    return 0;
}
