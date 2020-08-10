#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, l=INT_MAX, r=-1;
    cin>>n;
    vector<int> v(n), u(n);

    for(int i=0; i<n; i++){
        cin>>v[i]>>u[i];
        if(v[i]<l) l=v[i];
        if(u[i]>r) r=u[i];
    }
    for(int i=0; i<n; i++){
        if(v[i]==l && u[i]==r){cout<<i+1; return 0;}
    }
    cout<<-1;
    return 0;
}
