#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, i=0;
    cin>>n>>k;
    vector<int> v = {min(n, k+1)};
    i=v[0]+2*k+1;
    while(i<=n){
        v.push_back(i);
        i+=2*k+1;
    }

    i = (i-n);
    i = (i!=0 && i<k+1)? i: 0;

    cout<<v.size()+(i!=0)<<endl;
    for(int x: v) cout<<x-i<<" ";
    if(i!=0) cout<<n;
    return 0;
}
