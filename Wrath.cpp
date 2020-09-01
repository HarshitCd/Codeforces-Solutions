#include<bits/stdc++.h>
using namespace std;

int main(){
    const int inf = 1e9+7;
    int n, i, j, k=0;
    cin>>n;
    vector<int> v(n), a(n);
    for(i=0; i<n; i++){
        cin>>a[i];
        --v[i];
        ++v[max(0, i-a[i])];
    }

    for(int i=1; i<n; i++) v[i]+=v[i-1];
    for(int i=0; i<n; i++){
        if(v[i]==0) k++;
    }

    cout<<k;
    return 0;
}
