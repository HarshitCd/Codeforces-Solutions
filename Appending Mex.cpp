#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a=-1;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n; i++){
        if(v[i]>a+1){cout<<i+1; return 0;}
        a=max(a, v[i]);
    }
    cout<<-1;
    return 0;
}
