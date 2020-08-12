#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j, a=0;
    cin>>n;
    vector<int> v(n);

    for(i=0;i<n; i++) cin>>v[i];
    for(i=0;i<n-1; i++){
        if(v[i]>v[i+1]) break;
    }
    if(i==n-1){cout<<0; return 0;}
    for(j=i+1; j<n+i+1; j++){
        if(v[j%n]>v[(j+1)%n]) break;
    }

    //cout<<n<<" "<<i<<" "<<j<<endl;
    if(j==n+i) cout<<n-i-1;
    else cout<<-1;
    return 0;
}
