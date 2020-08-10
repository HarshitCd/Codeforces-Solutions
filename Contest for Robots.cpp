#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0, b=0;
    cin>>n;
    vector<int>v(n);
    vector<int>u(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n; i++){
        cin>>u[i];
        if(u[i]==1) b++;
    }
    for(int i=0; i<n; i++){
        if(v[i]!=u[i] && v[i]==1) c++;
        if(v[i]==u[i] && v[i]==1) b--;
    }
    if(c==0) cout<<-1;you
    else{
        b= b/c+1;
        cout<<b;
    }
    return 0;
}
