#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0, a;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    for(int i=1; i<n; i++){
        a=v[i]-v[i-1]-1;
        if(a!=0) c+=a;
    }
    cout<<c;
    return 0;
}
