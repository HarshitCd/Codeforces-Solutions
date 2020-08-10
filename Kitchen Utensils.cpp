#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, a, ma=0;
    unordered_map<int, int> m;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>a;
        m[a]++;
        if(ma<m[a]) ma=m[a];
    }
    ma=(ma%k==0)?ma/k:ma/k+1;
    k*=ma;
    k*=m.size();
    cout<<k-n;
    return 0;
}
