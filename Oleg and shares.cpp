#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, mi=INT_MAX;
    long long s=0;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(mi>v[i]) mi=v[i];
    }
    for(int x: v){
        x-=mi;
        if(x%k!=0){cout<<-1; return 0;}
        s+=x;
    }
    cout<<s/k;
    return 0;
}

