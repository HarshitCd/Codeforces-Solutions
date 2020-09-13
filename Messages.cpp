#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, c, t, k, m=0;

    cin>>n>>a>>b>>c>>t;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[m]>v[i]) m=i;
    }
    if(v[m]>t){cout<<0; return 0;}
    int ans1 = n*a;
    int ans2 = 0;
    for(int i=0; i<n; i++) {
        k=t-v[i];
        ans2+=a-k*b;
        ans2+=c*k;
    }
    cout<<max(ans1, ans2);
    return 0;
}
