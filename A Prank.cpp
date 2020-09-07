#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0, mx=0;
    cin>>n;
    vector<int> v(n+2);
    v[0]=0; v[n+1]=1001;
    for(int i=1; i<=n; i++) cin>>v[i];
    for(int i=1; i<n+2; i++){
        if(v[i]-v[i-1]==1) c++;
        else{mx = max(c-1, mx); c=0;}
    }
    cout<<max(mx, c-1);
    return 0;
}
