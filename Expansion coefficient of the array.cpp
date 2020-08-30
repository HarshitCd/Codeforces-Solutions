#include<bits/stdc++.h>
using namespace std;

int main(){
    int m=1e9, n, a;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        m = min(m, a/max(i, n-i-1));
    }
    cout<<m;
    return 0;
}
