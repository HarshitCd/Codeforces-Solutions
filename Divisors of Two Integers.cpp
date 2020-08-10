#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i, a;
    map<int, int> m;
    cin>>n;
    vector<int> v(n);
    for(i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    a = v[n-1];
    v[n-1]=0;
    m[a]=1;
    for(i=n-2; i>=0; i--){
        if(a%v[i]==0 && m[v[i]]==0){m[v[i]]=1; v[i]=0;}
    }
    sort(v.begin(), v.end());
    cout<<v[n-1]<<" "<<a;
    return 0;
}
