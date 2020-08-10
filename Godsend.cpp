#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, e=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        e+=(v[i]%2==0)?1:0;
    }
    if(e==n) cout<<"Second";
    else cout<<"First";
    return 0;
}
