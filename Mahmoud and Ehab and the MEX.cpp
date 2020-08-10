#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, ans=0, a;
    cin>>n>>x;
    vector<int> v(101);
    for(int i=0; i<n; i++){cin>>a; v[a]++;}
    for(int i=0; i<x; i++){
        ans+=(v[i]==0)?1:0;
    }

    cout<<ans+v[x];
    return 0;
}
