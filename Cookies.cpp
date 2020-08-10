#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, s=0, e=0, o=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        s+=v[i];
        if(v[i]%2==0) e++;
        else o++;
    }
    if(s%2==0) cout<<e;
    else cout<<o;
    return 0;
}
