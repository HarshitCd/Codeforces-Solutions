#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m=-1;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        v[i]=min(v[i], abs(1000000-v[i]+1));
    }
    for(int x: v) m = max(x, m);
    cout<<m-1;
    return 0;
}
