#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, a=0, i;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());

    for(i=1; i<n; i++)
        if(a==0) a = v[i]-v[0];
        else if(v[i]-v[0]!=0 && v[i]-v[0]!=a && v[i]-v[0]!=2*a) break;

    if(i!=n) cout<<"NO";
    else cout<<"YES";

    return 0;
}
